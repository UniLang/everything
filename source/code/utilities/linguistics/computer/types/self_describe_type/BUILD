package(default_visibility = ["//visibility:public"])

load("//bazel/rules/hcp:hcp.bzl", "hcp")
load("//bazel/rules/cpp:object.bzl", "cpp_object")
load("//bazel/rules/enum_cpp:enum_cpp.bzl", "enum_cpp")

enum_cpp(
    name = "type_property_word",
    values = [
        "optional",
        "serializable",
        "collection",
        "sequence",
        "state",
    ],
)

hcp(
    name = "weighted_type_property_word",
    deps = [
        "//code/utilities/linguistics/computer/types/self_describe_type:type_property_word",
    ],
)

hcp(
    name = "type_properties_to_identifier_words",
    deps = [
        "//code/utilities/types:tri_string",
    ],
)

hcp(
    name = "modify_identifier_with_extra_type_info",
    deps = [
        "extra_type_suffix_settings",
        "identifier_with_type_info",
        "weighted_type_property_word",
        "//code/utilities/types:tri_bool",
        "//code/utilities/types:tri_string",
        "//code/utilities/types/strings/transformers/inflection:inflection_converter",
        "//code/utilities/types/strings/transformers/inflection/getters:inflection_settings_getter",
    ],
)

hcp(
    name = "inferred_type_properties",
    deps = [
        "//code/utilities/types:tri_bool",
    ],
)

hcp(
    name = "identifier_with_type_info",
    deps = [
        "//code/utilities/types:tri_bool",
    ],
)

hcp(
    name = "extra_type_suffix_settings",
    deps = [
        "type_properties_to_identifier_words",
    ],
)
