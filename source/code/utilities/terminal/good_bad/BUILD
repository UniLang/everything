package(default_visibility = ["//visibility:public"])

load("//bazel/rules/hcp:hcp.bzl", "hcp")
load("//bazel/rules/cpp:object.bzl", "cpp_object")
load("//bazel/rules/enum_cpp:enum_cpp.bzl", "enum_cpp")

hcp(
    name = "good_bad_terminal_changer",
    deps = [
        "//code/utilities/math",
        "//code/utilities/program/call:lib",
        "//code/utilities/terminal:terminal_background_changer",
        "//code/utilities/terminal/good_bad:good_bad_terminal_settings",
    ],
)

hcp(
    name = "good_bad_terminal_settings",
    deps = [
        "//code/utilities/peripheral/screen/good_bad:mood_setting",
    ],
)
