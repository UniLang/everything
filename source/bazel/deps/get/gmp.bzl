# Do not edit this file directly.
# It was auto-generated by: code/tools/reflexivity/reflexive_refresh

load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

def gmp():
    http_archive(
        name = "gmp",
        build_file = "//bazel/deps/build_files:gmp.BUILD",
        sha256 = "341237cd00ec7b72f609d8246569ceda322992efcee853ac21c43ce8bf310de9",
        strip_prefix = "GMP-cc09e59afe9a23de9e7d0ef10598a395d7e8c850",
        urls = [
            "https://github.com/Unilang/GMP/archive/cc09e59afe9a23de9e7d0ef10598a395d7e8c850.tar.gz",
        ],
    )
