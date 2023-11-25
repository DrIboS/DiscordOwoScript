#pragma once
#include <iostream>
#include <Windows.h>
using namespace std;

void owo_500() {
	INPUT inputs[2] = {};
	inputs[0].type = INPUT_KEYBOARD;
	inputs[0].ki.wVk = 0;
	inputs[1] = inputs[0];
	inputs[1].ki.dwFlags = KEYEVENTF_KEYUP;

	const char* mesaj = "owo cf 500";
	for (int i = 0; i < strlen(mesaj); i++) {
		inputs[0].ki.wVk = VkKeyScan(mesaj[i]);
		SendInput(1, &inputs[0], sizeof(INPUT));
		SendInput(1, &inputs[1], sizeof(INPUT));
		Sleep(50);
	}

}

void owo_10000() {
	INPUT inputs[2] = {};
	inputs[0].type = INPUT_KEYBOARD;
	inputs[0].ki.wVk = 0;
	inputs[1] = inputs[0];
	inputs[1].ki.dwFlags = KEYEVENTF_KEYUP;

	const char* mesaj = "owo cf 10000";
	for (int i = 0; i < strlen(mesaj); i++) {
		inputs[0].ki.wVk = VkKeyScan(mesaj[i]);
		SendInput(1, &inputs[0], sizeof(INPUT));
		SendInput(1, &inputs[1], sizeof(INPUT));
		Sleep(50);
	}
}

void owo_30000() {
	INPUT inputs[2] = {};
	inputs[0].type = INPUT_KEYBOARD;
	inputs[0].ki.wVk = 0;
	inputs[1] = inputs[0];
	inputs[1].ki.dwFlags = KEYEVENTF_KEYUP;

	const char* mesaj = "owo cf 30000";
	for (int i = 0; i < strlen(mesaj); i++) {
		inputs[0].ki.wVk = VkKeyScan(mesaj[i]);
		SendInput(1, &inputs[0], sizeof(INPUT));
		SendInput(1, &inputs[1], sizeof(INPUT));
		Sleep(50);
	}
}

void owo_60000() {
	INPUT inputs[2] = {};
	inputs[0].type = INPUT_KEYBOARD;
	inputs[0].ki.wVk = 0;
	inputs[1] = inputs[0];
	inputs[1].ki.dwFlags = KEYEVENTF_KEYUP;

	const char* mesaj = "owo cf 60000";
	for (int i = 0; i < strlen(mesaj); i++) {
		inputs[0].ki.wVk = VkKeyScan(mesaj[i]);
		SendInput(1, &inputs[0], sizeof(INPUT));
		SendInput(1, &inputs[1], sizeof(INPUT));
		Sleep(50);
	}
}

void owo_120000() {
	INPUT inputs[2] = {};
	inputs[0].type = INPUT_KEYBOARD;
	inputs[0].ki.wVk = 0;
	inputs[1] = inputs[0];
	inputs[1].ki.dwFlags = KEYEVENTF_KEYUP;

	const char* mesaj = "owo cf 120000";
	for (int i = 0; i < strlen(mesaj); i++) {
		inputs[0].ki.wVk = VkKeyScan(mesaj[i]);
		SendInput(1, &inputs[0], sizeof(INPUT));
		SendInput(1, &inputs[1], sizeof(INPUT));
		Sleep(50);
	}
}

void owo_240000() {
	INPUT inputs[2] = {};
	inputs[0].type = INPUT_KEYBOARD;
	inputs[0].ki.wVk = 0;
	inputs[1] = inputs[0];
	inputs[1].ki.dwFlags = KEYEVENTF_KEYUP;

	const char* mesaj = "owo cf 240000";
	for (int i = 0; i < strlen(mesaj); i++) {
		inputs[0].ki.wVk = VkKeyScan(mesaj[i]);
		SendInput(1, &inputs[0], sizeof(INPUT));
		SendInput(1, &inputs[1], sizeof(INPUT));
		Sleep(50);
	}
}

void owo_mause_event(int x, int y) {
	SetCursorPos(x, y);
	mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);
	mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
}

void owo_mause_event_double(int x, int y) {
	SetCursorPos(x, y);
	Sleep(1650);
	mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);
	mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
	mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);
	mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
}

void owo_press_enter() {
	INPUT inputs[2] = {};
	inputs[0].type = INPUT_KEYBOARD;
	inputs[0].ki.wVk = 0;
	inputs[1] = inputs[0];
	inputs[1].ki.dwFlags = KEYEVENTF_KEYUP;

	inputs[0].ki.wVk = VK_RETURN;
	SendInput(1, &inputs[0], sizeof(INPUT));
	inputs[1].ki.wVk = VK_RETURN;
	SendInput(1, &inputs[1], sizeof(INPUT));
}

void owo_ctrl_c() {
	INPUT input[4] = {};

	// Ctrl tuþuna basýlýyor
	input[0].type = INPUT_KEYBOARD;
	input[0].ki.wVk = VK_CONTROL;

	// C tuþuna basýlýyor
	input[1].type = INPUT_KEYBOARD;
	input[1].ki.wVk = 0x43;

	// Ctrl tuþu serbest býrakýlýyor
	input[2].type = INPUT_KEYBOARD;
	input[2].ki.wVk = VK_CONTROL;
	input[2].ki.dwFlags = KEYEVENTF_KEYUP;

	// C tuþu serbest býrakýlýyor
	input[3].type = INPUT_KEYBOARD;
	input[3].ki.wVk = 0x43;
	input[3].ki.dwFlags = KEYEVENTF_KEYUP;

	SendInput(4, input, sizeof(INPUT));

	cout << "Basariyla Kopyalandi!" << endl;
}

void owo_pay_attention() {
	cout << "Programi calistirdiktan sonra lutfen discordunuzu tam ekran yapiniz. Eger discordunuzda bir ayar degisikligi yaptiysanizsifirlayiniz. Devam etmek icin Lutfen Alttaki satira 1 yaziniz." << endl;
	cout << "Eger ben anlamadim diyorsaniz 2 yaziniz. Programdan cikmak icin 3 yazmaniz yeterlidir!" << endl;
	cout << "Seciminiz : ";
}

void get_mause_cord() {
	POINT cursor_position;
	while (true) {
		GetCursorPos(&cursor_position);
		cout << "X ekseni: " << cursor_position.x << " Y ekseni: " << cursor_position.y << endl;
		Sleep(150);
		system("cls");
	}
}