package(default_visibility = ["//visibility:public"])

load("//bazel/rules/hcp:hcp.bzl", "hcp")
load("//bazel/rules/cpp:object.bzl", "cpp_object")

hcp(
    name = "equivalent_type_deriver",
    deps = [
        "//code/utilities/linguistics/computer/types/cross:cross_language_type",
        "//code/utilities/types:tri_bool",
    ],
)

hcp(
    name = "type_conversion_lookup_table",
    deps = [
        "//code/utilities/linguistics/computer/types/cross:cross_language_type",
    ],
)

hcp(
    name = "unilang_type_to_language_type_table_getter",
    deps = [
        "//code/utilities/linguistics/computer:source_language",
        "//code/utilities/linguistics/computer/types/generic/lookup_table:equivalent_type_deriver",
        "//code/utilities/linguistics/computer/types/generic/lookup_table:type_conversion_lookup_table",
        "//code/utilities/types/map:lib",
    ],
)
