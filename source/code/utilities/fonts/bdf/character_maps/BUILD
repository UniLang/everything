package(default_visibility = ["//visibility:public"])

load("//bazel/rules/hcp:hcp.bzl", "hcp")
load("//bazel/rules/cpp:object.bzl", "cpp_object")

hcp(
    name = "character_segment_map",
    deps = ["//code/utilities/fonts/bdf/settings:character_segment"],
)

hcp(
    name = "character_segment_map_creator",
    deps = [
        "//code/utilities/fonts/bdf/character_maps:character_segment_map",
        "//code/utilities/fonts/bdf/settings:character_segment",
    ],
)

hcp(
    name = "character_bitmap_map",
    deps = [
        "//code/utilities/data_structures/graphics/bitmap/full_color_bitmap:positioned_full_color_bitmap",
    ],
)

hcp(
    name = "character_bitmap_map_creator",
    deps = [
        "//code/utilities/colors/defaults:color_defaults",
        "//code/utilities/fonts/bdf/character_maps:character_bitmap_map",
        "//code/utilities/fonts/bdf/character_maps:character_segment_map",
        "//code/utilities/graphics/imgui:imgui_type_utility",
        "//code/utilities/types/char:lib",
    ],
)

hcp(
    name = "character_maps",
    deps = [
        "//code/utilities/fonts/bdf/character_maps:character_bitmap_map",
        "//code/utilities/fonts/bdf/character_maps:character_segment_map",
    ],
)

hcp(
    name = "character_maps_getter",
    deps = [
        "//code/utilities/fonts/bdf/character_maps",
        "//code/utilities/fonts/bdf/character_maps:character_bitmap_map_creator",
        "//code/utilities/fonts/bdf/character_maps:character_segment_map_creator",
        "//code/utilities/fonts/bdf/settings:character_segment",
    ],
)
