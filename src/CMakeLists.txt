aux_source_directory(. DIR_SRCS)
add_executable(demo ${DIR_SRCS})

target_link_libraries(${PROJECT_NAME} Qt5::Widgets)

