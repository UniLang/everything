package(default_visibility = ["//visibility:public"])

load("//bazel/rules/hcp:hcp.bzl", "hcp")
load("//bazel/rules/cpp:object.bzl", "cpp_object")

hcp(
    name = "software_deployer",

    # software to deploy
    data = [
        "//code/programs/repo_tools/no_remote_scan:no_remote_scan_debs",
        "//code/programs/repo_tools/repo_stats:repo_stats_debs",
    ],
    deps = [
        "//code/programs/repo_tools/no_remote_scan:no_remote_scan_documentation_getter",
        "//code/programs/repo_tools/repo_stats:repo_stats_documentation_getter",
        "//code/utilities/code:concept_static_tree_structs",
        "//code/utilities/filesystem/files/getting:lib",
        "//code/utilities/filesystem/files/moving:lib",
        "//code/utilities/filesystem/files/observers/other:ldd_results_getter",
        "//code/utilities/filesystem/paths:lib",
        "//code/utilities/formats/json/converters:type_to_json_string",
        "//code/utilities/formats/pdf:pdf_creator",
        "//code/utilities/formats/pdf:pdf_settings",
        "//code/utilities/linguistics/computer/frontends/markdown:markdown_str_getter",
        "//code/utilities/linguistics/computer/frontends/markdown/settings:markdown_settings",
        "//code/utilities/personal/hosting:hosting_repo",
        "//code/utilities/program/wrappers/git/update:git_updater",
        "//code/utilities/types/strings/observers/path:lib",
        "//code/utilities/types/vectors/observers:lib",
        "//code/utilities/types/vectors/transformers:lib",
    ],
)

cc_binary(
    name = "main",
    srcs = ["main.cpp"],
    deps = [
        "//code/programs/reflexivity/publish/software:software_deployer",
        "//code/utilities/program/common_actions/locale:lib",
    ],
)
