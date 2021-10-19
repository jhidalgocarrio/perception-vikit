find_package (Sophus REQUIRED)
message (STATUS "Sophus_INCLUDE_DIRS=" ${Sophus_INCLUDE_DIRS})

rock_library(vikit
    SOURCES
        atan_camera.cpp
        homography.cpp
        img_align.cpp
        math_utils.cpp
        omni_camera.cpp
        performance_monitor.cpp
        pinhole_camera.cpp
        robust_cost.cpp
        user_input_thread.cpp
        vision.cpp
    HEADERS
        abstract_camera.h
        aligned_mem.h
        atan_camera.h
        blender_utils.h
        file_reader.h
        file_reader_types.h
        homography.h
        img_align.h
        math_utils.h
        nlls_solver.h
        omni_camera.h
        patch_score.h
        performance_monitor.h
        pinhole_camera.h
        ringbuffer.h
        robust_cost.h
        sample.h
        timer.h
        user_input_thread.h
        vision.h
    DEPS_PKGCONFIG
        eigen3
    DEPS_CMAKE
        Sophus
    )

