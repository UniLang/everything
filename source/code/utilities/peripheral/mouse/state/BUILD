package(default_visibility = ["//visibility:public"])

load("//bazel/rules/hcp:hcp.bzl", "hcp")
load("//bazel/rules/cpp:object.bzl", "cpp_object")
load("//bazel/rules/cpp:main.bzl", "cpp_main")

hcp(
    name = "mouse_button_state",
    deps = [
    ],
)

hcp(
    name = "mouse_state",
    deps = [
        "//code/utilities/data_structures/position",
        "//code/utilities/peripheral/mouse/state:mouse_button_state",
        "//code/utilities/peripheral/mouse/state:mouse_wheel",
    ],
)

hcp(
    name = "mouse_position_getter",
    deps = [
        "//code/utilities/data_structures/position",
        "//code/utilities/graphics/imgui/loop:mechanics",
    ],
)

hcp(
    name = "mouse_state_getter",
    deps = [
        "//code/utilities/graphics/imgui/loop:mechanics",
        "//code/utilities/peripheral/mouse/state:mouse_position_getter",
        "//code/utilities/peripheral/mouse/state:mouse_state",
    ],
)

hcp(
    name = "mouse_wheel",
    deps = [
    ],
)
