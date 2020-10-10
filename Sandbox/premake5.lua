project "Sandbox"
	kind "ConsoleApp"
	language "C++"
	cppdialect "C++17"
	staticruntime "on"

	targetdir ("%{wks.location}/bin/" .. outputdir .. "/%{prj.name}")
	objdir ("%{wks.location}/bin-int/" .. outputdir .. "/%{prj.name}")

	files
	{
		"Source/**.h",
		"Source/**.cpp"
	}

	includedirs
	{
		"%{wks.location}/PlexityStudio/Vendors/spdlog/include",
		"%{wks.location}/PlexityStudio/Source",
		"%{wks.location}/PlexityStudio/Vendors"
	}

	links
	{
		"%{wks.location}/bin/" .. outputdir .. "/PlexityEngine/PlexityEngine.lib"
	}

	filter "system:windows"
		systemversion "latest"

	filter "configurations:Debug"
		defines "PX_DEBUG"
		runtime "Debug"
		symbols "on"

	filter "configurations:Release"
		defines "PX_RELEASE"
		runtime "Release"
		optimize "on"

	filter "configurations:Dist"
		defines "PX_DIST"
		runtime "Release"
		optimize "on"