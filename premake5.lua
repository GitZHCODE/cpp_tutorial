
function create_project(project_name)
    project (project_name)
        location "src/%{prj.name}/project"
        kind "ConsoleApp"
        language "C++"
        cppdialect "C++17"

        objdir "src/%{prj.name}/bin-int"
        targetdir "src/%{prj.name}/bin"

        files
        {
            "src/%{prj.name}/**.h",
            "src/%{prj.name}/**.cpp"
        }
end

workspace "C++ Tutorial"
    architecture "x64"
    filename "cpp_tutorial"

    configurations {
        "Debug",
        "Exercise"
        }
    filter {"configurations:Debug"}
        defines {"_DEBUG_"}
    filter {"configurations:Exercise"}
        defines {"_EXERCISE_"}
    filter {}

-- Example 1
    create_project("1_hello_world")

-- Example 2
    create_project("2_hello_header")

-- Example 3
    create_project("3_variables_loops")

-- Example 4
    create_project("4_functions")

-- Example 5
    create_project("5_classes_structs")

-- Example 6
    create_project("6_pointers")

-- Example 7
    create_project("7_compiler_error")

-- Example 8
    create_project("8_linker_error")

-- Example 8
    create_project("9_stack_overflow")
