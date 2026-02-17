add_executable(tour_ch02  main.cpp
        vector.cpp
        vector.h
        Vector_Class.h
        Vector_Class.cpp
        enum_demo.cpp
        union_demo.cpp
        union_demo.cpp)
target_compile_features(tour_ch02  PRIVATE cxx_std_20)