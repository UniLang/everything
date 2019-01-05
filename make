#!/usr/bin/env bash
set -euo pipefail

# the build system we are using
url=https://github.com/bazelbuild/bazel/releases/download/0.21.0/bazel-0.21.0-linux-x86_64
sha256=7a2f347d779c4c772cdb318f0435f8d489a238be42e7a9bf1e2bad94b1c3094f

# paths to place bazel related artifacts
cache_root=${CACHE_ROOT:-"${HOME}/.cache"}
install_dir="${cache_root}/bazel/${sha256}"
bazel="${install_dir}/bazel"

if [[ ! -f "${bazel}" ]]; then

    # Say that we are missing bazel, and will install it
    echo "INFO: Required bazel version not found."
    echo "downloading to ${bazel}..." >&2

    # Check for some bootstraping necessities
    command -v mkdir >/dev/null 2>&1 || { echo >&2 "I require mkdir but it's not installed.  Aborting."; exit 1; }
    command -v rm >/dev/null 2>&1 || { echo >&2 "I require rm but it's not installed.  Aborting."; exit 1; }
    command -v chmod >/dev/null 2>&1 || { echo >&2 "I require chmod but it's not installed.  Aborting."; exit 1; }
    command -v trap >/dev/null 2>&1 || { echo >&2 "I require trap but it's not installed.  Aborting."; exit 1; }
    command -v tty >/dev/null 2>&1 || { echo >&2 "I require tty but it's not installed.  Aborting."; exit 1; }
    command -v wget >/dev/null 2>&1 || { echo >&2 "I require wget but it's not installed.  Aborting."; exit 1; }
    command -v sha256sum >/dev/null 2>&1 || { echo >&2 "I require sha256sum but it's not installed.  Aborting."; exit 1; }

    # Setup install directory & delete it on failure
    mkdir -p "${install_dir}"
    trap 'rm -rf "${install_dir}"' ERR INT TERM

    # Download bazel
    in_progress_download="${install_dir}/in_progress_download"
    if tty -s; then
    	wget "${url}" -O "${in_progress_download}"
    else
        wget "${url}" -O "${in_progress_download}" --no-verbose
    fi

    # Check that our download is valid
    echo "${sha256}  ${in_progress_download}" | sha256sum --check >&2
    chmod +x "${in_progress_download}"
    mv "${in_progress_download}" "${bazel}"
    trap - ERR INT TERM

fi

# If Inside Emacs Bazel tries to be helpful say it's "entering a
# directory" but that actually confuses emacs because then it starts
# looking for files inside the runfiles tree.
unset INSIDE_EMACS

echo "hello world"
