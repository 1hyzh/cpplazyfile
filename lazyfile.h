#pragma once
#include <thread>
#include <string>
#include <iostream>
#include <Windows.h>

auto sleep(int seconds) -> void {
	std::this_thread::sleep_for(std::chrono::seconds(seconds));
}

auto print(std::string string, bool endl) -> void {
	if (endl = true) {
		std::cout << string << std::endl;
	}
	else {
		std::cout << string;
	}
}

auto WaitForKey(SHORT keycode) -> void {
	while (!GetAsyncKeyState(keycode)) {
		std::this_thread::sleep_for(std::chrono::seconds(1));
	}
}
