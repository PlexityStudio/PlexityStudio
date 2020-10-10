include "./vendor/premake/premake_customization/solution_items.lua"

printf("Generating project files.")

workspace "PlexityStudio"
	architecture "x86_64"
	startproject "PlexityStudio"

	configurations
	{
		"Debug",
		"Release",
		"Dist"
	}

	solution_items
	{
		".editorconfig"
	}

	flags
	{
		"MultiProcessorCompile"
	}

outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

-- Include directories relative to root folder (solution directory)
IncludeDir = {}
IncludeDir["GLFW"] = "%{wks.location}/PlexityStudio/Vendors/GLFW/include"
IncludeDir["glm"] = "%{wks.location}/PlexityStudio/Vendors/glm"
IncludeDir["Vulkan"] = "%{wks.location}/PlexityStudio/Vendors/Vulkan/Include"

group "Dependencies"
	include "vendor/premake/"
	include "PlexityStudio/Vendors/GLFW/"
group ""

include "PlexityStudio"
include "Sandbox"