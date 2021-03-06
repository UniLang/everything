package(default_visibility = ["//visibility:public"])

load("//bazel/rules/hcp:hcp.bzl", "hcp")
load("//bazel/rules/cpp:object.bzl", "cpp_object")

hcp(
    name = "argument_is_mutable",
    deps = [
        "//code/utilities/code:concept_static_tree_structs",
        "//code/utilities/code/properties/symbols:token_attribute_settings",
        "//code/utilities/comments/doxygen/settings:doxygen_parameter_direction",
        "//code/utilities/types/converters:lib",
        "//code/utilities/types/strings/observers/other:lib",
        "//code/utilities/types/strings/transformers/stripping:lib",
        "//code/utilities/types/vectors/observers:lib",
    ],
)

hcp(
    name = "argument_is_reference",
    deps = [
        "//code/utilities/code:concept_static_tree_structs",
        "//code/utilities/code/properties/symbols:token_attribute_settings",
        "//code/utilities/comments/doxygen/settings:doxygen_parameter_direction",
        "//code/utilities/types/converters:lib",
        "//code/utilities/types/strings/observers/other:lib",
        "//code/utilities/types/strings/transformers/stripping:lib",
        "//code/utilities/types/vectors/observers:lib",
    ],
)

hcp(
    name = "class_name_getter",
    deps = [
        "//code/utilities/code:concept_static_tree_structs",
        "//code/utilities/contributor",
        "//code/utilities/linguistics/computer/frontends/parts:module_settings",
        "//code/utilities/types/converters:lib",
        "//code/utilities/types/strings/transformers/appending:lib",
        "//code/utilities/types/strings/transformers/casing:case_modifier",
        "//code/utilities/types/vectors/converters:lib",
        "//code/utilities/types/vectors/observers:lib",
        "//code/utilities/types/vectors/operators:lib",
    ],
)

hcp(
    name = "argument_is_pointer_like",
    deps = [
        "//code/utilities/code:concept_static_tree_structs",
        "//code/utilities/code/query:argument_is_reference",
        "//code/utilities/types/converters:lib",
        "//code/utilities/types/strings/observers/other:lib",
        "//code/utilities/types/strings/transformers/stripping:lib",
        "//code/utilities/types/vectors/observers:lib",
    ],
)

hcp(
    name = "argument_direction_decider",
    deps = [
        "//code/utilities/code:concept_static_tree_structs",
        "//code/utilities/code/query:argument_is_mutable",
        "//code/utilities/code/query:argument_is_pointer_like",
        "//code/utilities/types/converters:lib",
        "//code/utilities/types/strings/observers/other:lib",
        "//code/utilities/types/strings/transformers/stripping:lib",
        "//code/utilities/types/vectors/observers:lib",
    ],
)

hcp(
    name = "virtual_method_checker",
    deps = [
        "//code/utilities/code:concept_static_tree_structs",
        "//code/utilities/code/properties/symbols:token_attribute_settings",
        "//code/utilities/types/strings/observers/other:lib",
        "//code/utilities/types/vectors/observers:lib",
    ],
)

hcp(
    name = "method_is_overloaded",
    deps = [
        "//code/utilities/code:concept_static_tree_structs",
        "//code/utilities/types/strings/observers/other:lib",
        "//code/utilities/types/vectors/observers:lib",
    ],
)

hcp(
    name = "data_member_visibility",
    deps = [
        "//code/utilities/code:class_access",
        "//code/utilities/code:concept_static_tree_structs",
        "//code/utilities/code/properties/symbols:token_attribute_settings",
        "//code/utilities/comments/doxygen/settings:doxygen_parameter_direction",
        "//code/utilities/types/converters:lib",
        "//code/utilities/types/strings/observers/other:lib",
        "//code/utilities/types/strings/transformers/stripping:lib",
        "//code/utilities/types/vectors/observers:lib",
    ],
)

hcp(
    name = "function_visibility",
    deps = [
        "//code/utilities/code:class_access",
        "//code/utilities/code:concept_static_tree_structs",
        "//code/utilities/code/properties/symbols:token_attribute_settings",
        "//code/utilities/comments/doxygen/settings:doxygen_parameter_direction",
        "//code/utilities/types/converters:lib",
        "//code/utilities/types/strings/observers/other:lib",
        "//code/utilities/types/strings/transformers/stripping:lib",
        "//code/utilities/types/vectors/observers:lib",
    ],
)

hcp(
    name = "data_member_storage_specifier",
    deps = [
        "//code/utilities/code:concept_static_tree_structs",
        "//code/utilities/code:storage_specifier",
        "//code/utilities/code/properties/symbols:token_attribute_settings",
        "//code/utilities/comments/doxygen/settings:doxygen_parameter_direction",
        "//code/utilities/types/converters:lib",
        "//code/utilities/types/strings/observers/other:lib",
        "//code/utilities/types/strings/transformers/stripping:lib",
        "//code/utilities/types/vectors/observers:lib",
    ],
)

hcp(
    name = "function_storage_specifier",
    deps = [
        "//code/utilities/code:concept_static_tree_structs",
        "//code/utilities/code:storage_specifier",
        "//code/utilities/code/properties/symbols:token_attribute_settings",
        "//code/utilities/comments/doxygen/settings:doxygen_parameter_direction",
        "//code/utilities/types/converters:lib",
        "//code/utilities/types/strings/observers/other:lib",
        "//code/utilities/types/strings/transformers/stripping:lib",
        "//code/utilities/types/vectors/observers:lib",
    ],
)

hcp(
    name = "data_member_mutability",
    deps = [
        "//code/utilities/code:concept_static_tree_structs",
        "//code/utilities/code:mutability",
        "//code/utilities/code/properties/symbols:token_attribute_settings",
        "//code/utilities/comments/doxygen/settings:doxygen_parameter_direction",
        "//code/utilities/types/converters:lib",
        "//code/utilities/types/strings/observers/other:lib",
        "//code/utilities/types/strings/transformers/stripping:lib",
        "//code/utilities/types/vectors/observers:lib",
    ],
)

hcp(
    name = "data_member_type_getter",
    deps = [
        "//code/utilities/code:concept_static_tree_structs",
        "//code/utilities/contributor",
        "//code/utilities/linguistics/computer:source_language",
        "//code/utilities/linguistics/computer/types/generic:unilang_type_to_language_type_converter",
        "//code/utilities/types/vectors/converters:lib",
        "//code/utilities/types/vectors/observers:lib",
        "//code/utilities/types/vectors/operators:lib",
    ],
)

hcp(
    name = "function_return_type_getter",
    deps = [
        "//code/utilities/code:concept_static_tree_structs",
        "//code/utilities/contributor",
        "//code/utilities/linguistics/computer:source_language",
        "//code/utilities/linguistics/computer/types/generic:unilang_type_to_language_type_converter",
        "//code/utilities/types/vectors/converters:lib",
        "//code/utilities/types/vectors/observers:lib",
        "//code/utilities/types/vectors/operators:lib",
    ],
)

hcp(
    name = "function_is_constructor",
    deps = [
        "//code/utilities/code:concept_static_tree_structs",
        "//code/utilities/contributor",
        "//code/utilities/linguistics/computer:source_language",
        "//code/utilities/linguistics/computer/types/generic:unilang_type_to_language_type_converter",
        "//code/utilities/types/vectors/converters:lib",
        "//code/utilities/types/vectors/observers:lib",
        "//code/utilities/types/vectors/operators:lib",
    ],
)
