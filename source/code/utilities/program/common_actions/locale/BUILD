package(default_visibility = ["//visibility:public"])

load("//bazel/rules/hcp:hcp.bzl", "hcp")
load("//bazel/rules/cpp:object.bzl", "cpp_object")

cc_library(
    name = "lib",
    srcs = ["lib.cpp"],
    hdrs = ["lib.hpp"],
)

hcp(
    name = "locale_setter",
    deps = [
        "//code/utilities/program/common_actions/locale:locale_settings",
    ],
)

hcp(
    name = "locale_settings",
    deps = [],
)
