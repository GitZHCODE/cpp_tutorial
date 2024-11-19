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

group "Examples"

-- Example 1
    create_project("001_hello_world")

-- Example 2
    create_project("002_hello_header")

-- Example 3
    create_project("003_variables_loops")

-- Example 4
    create_project("004_functions")

-- Example 5
    create_project("005_classes_structs")

-- Example 6
    create_project("006_pointers")

-- Example 7
    create_project("007_compiler_error")

-- Example 8
    create_project("008_linker_error")
    includedirs {"src/020_example_lib"}
    dependson{"020_example_lib"}

-- Example 9
    create_project("009_runtime_error")
    includedirs {"src/030_example_dll"}
    libdirs{"src/030_example_dll/bin"}
    links{"sample.lib"}
    dependson{"030_example_dll"}

group "Other"

-- Example 10
    create_project("010_rvalue")

-- Example 20
    create_project("020_example_lib")
    kind "StaticLib"
    targetname "example"

-- Example 30
    create_project("030_example_dll")
    kind "SharedLib"
    targetname "sample"
    defines {"_SAMPLE_EXPORT_"}
