package(default_visibility = ["//visibility:public"])

load("//bazel/rules/hcp:hcp.bzl", "hcp")
load("//bazel/rules/cpp:object.bzl", "cpp_object")

hcp(
    name = "doxygen_data_getter_for_data_members",
    deps = [
        "//code/utilities/code:concept_static_tree_structs",
        "//code/utilities/comments/doxygen/maker:doxygen_data",
        "//code/utilities/comments/doxygen/maker:doxygen_data_shared",
        "//code/utilities/comments/doxygen/maker/data_getter/adders:data_main_description_adder",
        "//code/utilities/linguistics/computer/frontends/parts:module_settings",
        "//code/utilities/types/converters:lib",
        "//code/utilities/types/general:lib",
    ],
)
