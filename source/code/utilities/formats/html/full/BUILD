package(default_visibility = ["//visibility:public"])

load("//bazel/rules/hcp:hcp.bzl", "hcp")
load("//bazel/rules/cpp:object.bzl", "cpp_object")

hcp(
    name = "list_of_links",
    deps = [
        "//code/utilities/formats/html:basic_html_template_getter",
        "//code/utilities/formats/html/body:html_list_maker",
        "//code/utilities/formats/html/style:link_list_styling",
        "//code/utilities/types/strings/transformers/appending:lib",
    ],
)

hcp(
    name = "centered_image",
    deps = [
        "//code/utilities/formats/html:basic_html_template_getter",
        "//code/utilities/formats/html/body:html_list_maker",
        "//code/utilities/formats/html/style:center_image_styling",
        "//code/utilities/types/strings/transformers/appending:lib",
    ],
)

hcp(
    name = "blog_essay",
    deps = [
        "//code/utilities/formats/html:basic_html_template_getter",
        "//code/utilities/formats/html/body:html_list_maker",
        "//code/utilities/formats/html/style:normalize",
        "//code/utilities/formats/html/style:simple_blog",
        "//code/utilities/types/strings/transformers/appending:lib",
    ],
)
