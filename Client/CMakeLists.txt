
FILE(GLOB_RECURSE PROJECT_SOURCE_FILES "*.h" "*.cpp" "*.templ" "*.ui")

ADD_EXECUTABLE(${PROJECT_NAME} ${PROJECT_SOURCE_FILES})
qt5_use_modules(${PROJECT_NAME} Core Gui Widgets)
TARGET_LINK_LIBRARIES(${PROJECT_NAME} common)
