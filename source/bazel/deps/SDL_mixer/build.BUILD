package(default_visibility = ["//visibility:public"])

#glob the files we care about
hdrs = glob(
    include = [
        "include/**/*.h",
        "src/**/*.h",
    ],
    exclude = [
    ],
)

srcs = glob(
    include = [
        "src/**/*.c",
    ],
    exclude = [
    ],
)

cc_library(
    name = "SDL_mixer",
    #srcs = srcs,
    #hdrs = hdrs,
    copts = [
    ],
    # includes = [
    #     "include",
    #     "src",
    #     "src/codecs",
    # ],
    deps = [
        "@sdl2",
        "@system//:SDL2_hdrs",
        "@system//:SDL_mixer",
    ],
)

#libtool: compile:  gcc -g -O2 -I./include -I./src -I./src/codecs -D_GNU_SOURCE=1 -D_REENTRANT -I/usr/include/SDL2
#-DHAVE_SIGNAL_H -DHAVE_SETBUF -fvisibility=hidden -DHAVE_FORK -DMUSIC_CMD -DMUSIC_WAV -DMUSIC_MID -DMUSIC_MID_TIMIDITY
#-I./src/codecs/timidity -DMUSIC_MID_FLUIDSYNTH -DFLUIDSYNTH_DYNAMIC=\"libfluidsynth.so.1\" -DMUSIC_OGG
#-DOGG_DYNAMIC=\"libvorbisfile.so.3\" -DMUSIC_FLAC -DFLAC_DYNAMIC=\"libFLAC.so.8\"
#-MMD -MT build/timidity.lo -c src/codecs/timidity/timidity.c -o build/timidity.o >/dev/null 2>&1
