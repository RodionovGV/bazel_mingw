cc_library(
    name = "logger",
    srcs = ["logger_factory.cpp", ],
    hdrs = ["logger_header.h", "logger.h","logger_cout.h", "logger_abseil.h"],
    copts = select({
        ":abseil_on":["-DABSL_ON"],
        ":abseil_off":["-DABSL_OFF"],
    }),
    deps = select({
        ":abseil_on": [
                        "@com_google_absl//absl/log:log",
                        "@com_google_absl//absl/log:initialize",
                        "@com_google_absl//absl/log:globals",
                        "@com_google_absl//absl/base:log_severity",
                        ],
        ":abseil_off": [],
        "//conditions:default": []
    }),
    visibility = ["//visibility:public"],
)
config_setting(
    name = "abseil_off",
    define_values  = {"lib_abseil": "off"},
    visibility = ["//visibility:public"],
)
config_setting(
    name = "abseil_on",
    define_values  = {"lib_abseil": "on"},
    visibility = ["//visibility:public"],
)