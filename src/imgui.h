#pragma once

#include "/dev/Lexon2/Lexon/Engine/libraries/imgui/imconfig.h"
#include "/dev/Lexon2/Lexon/Engine/libraries/imgui/imgui_tables.cpp"
#include "/dev/Lexon2/Lexon/Engine/libraries/imgui/imgui_internal.h"
#include "/dev/Lexon2/Lexon/Engine/libraries/imgui/imgui.cpp"
#include "/dev/Lexon2/Lexon/Engine/libraries/imgui/imgui_draw.cpp"
#include "/dev/Lexon2/Lexon/Engine/libraries/imgui/imgui_widgets.cpp"
#include "/dev/Lexon2/Lexon/Engine/libraries/imgui/imgui_demo.cpp"



namespace lve {
	class ImguiView {

		ImguiView();
		~ImguiView();

	public:
		void Init_imgui();

	};
}