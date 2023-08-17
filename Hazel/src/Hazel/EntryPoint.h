#pragma once

extern Hazel::Application* Hazel::CreateApplication();

#ifdef HZ_PLATFORM_WINDOWS

int main(int argc, char** argv)
{
	printf("Hazel Engine Start");
	Hazel::Application* app = Hazel::CreateApplication();
	app->Run();
	delete app;
	return 0;
}

#endif