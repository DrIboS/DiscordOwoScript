#include "owo_functions.h";
#include <windows.h>
#include <iostream>
#include <ctime>
#include <string.h>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
	int choosing;
	owo_pay_attention();
	cin >> choosing;

	if (choosing == 1) {
		cout << "Basairili!" << endl;
		goto a;
	}
	else if (choosing == 2) {
		cout << "Programi calistirdiniz, discordunuza gecis yapiniz ve tam erkan yapiniz. Bir kanala giriniz ki bu kanalda owo bot olsun.Hazirliklarinizi tamamladiktan sonra bu konsola geri donun." << endl;
		cout << "Simdi seciminizi yapiniz: ";
		cin >> choosing;
		while (choosing == 2 && choosing > 3) {
			cout << "Lutfen Dogru secimi yapiniz!" << endl;
			cout << "Seciminiz: ";
			cin >> choosing;
		}
		if (choosing == 1) {
			cout << "Basarili!" << endl;
			goto a;
		}
		else if (choosing == 3) {
			return 0;
		}
	}
	else if (choosing == 3) {
		return 0;
	}

a:

	while (true) {
		int BALANCE = 0;
		int TUR = 0;
	g:
		srand(static_cast<unsigned>(time(nullptr)));

		int min = 18000;
		int max = 21000;

		int start = 2500;
		int finish = 3500;

		int mola_start = 420000;
		int mola_finish = 425000;

		int random_number_mola = mola_start + rand() % (mola_finish - mola_start + 1);

		int random_number = min + rand() % (max - min + 1);    // 18000 - 21000 arası sayı üretir.
		int random_number_2 = min + rand() % (max - min + 1);
		int random_number_3 = min + rand() % (max - min + 1);
		int random_number_4 = min + rand() % (max - min + 1);
		int random_number_5 = min + rand() % (max - min + 1);

		int random_number_start = start + rand() % (finish - start + 1);  // 3000 - 2000 arası sayı üretir.
		int random_number_start_2 = start + rand() % (finish - start + 1);
		int random_number_start_3 = start + rand() % (finish - start + 1);
		int random_number_start_4 = start + rand() % (finish - start + 1);
		int random_number_start_5 = start + rand() % (finish - start + 1);
		int random_number_start_6 = start + rand() % (finish - start + 1);
		int random_number_start_7 = start + rand() % (finish - start + 1);
		int random_number_start_8 = start + rand() % (finish - start + 1);
		int random_number_start_9 = start + rand() % (finish - start + 1);
		int random_number_start_10 = start + rand() % (finish - start + 1);
		int random_number_start_11 = start + rand() % (finish - start + 1);
		int random_number_start_12 = start + rand() % (finish - start + 1);
		int random_number_start_13 = start + rand() % (finish - start + 1);
		int random_number_start_14 = start + rand() % (finish - start + 1);
		int random_number_start_15 = start + rand() % (finish - start + 1);

		tur_pornosu:

		if (TUR == 25) {
			cout << "Dinlenecek 7 dk..." << endl;

			owo_mause_event_double(588, 847); // -> Won mu Lost mu kontrol eder.
			Sleep(1750);
			owo_ctrl_c();
			Sleep(1700);

			if (OpenClipboard(nullptr)) {
				HANDLE hClipboardData = GetClipboardData(CF_TEXT);
				char* clipboardText = static_cast<char*>(GlobalLock(hClipboardData));
				string Control = clipboardText;

				if (clipboardText) {
					cout << "Clipboard Verisi: " << clipboardText << endl;
					cout << "Deneme Verisi: " << Control << endl;
					GlobalUnlock(hClipboardData);
					if (Control == "won ") {
						CloseClipboard();
						goto come_here;
					}
					else if (Control == "lost ") {
						CloseClipboard();
						owo_mause_event_double(509, 822); // -> En Sonki Lostun Parasal Miktarini Kontrol Eder!
						Sleep(1750);
						owo_ctrl_c();
						Sleep(1700);

						if (OpenClipboard(nullptr)) {
							HANDLE hClipboardData = GetClipboardData(CF_TEXT);
							char* clipboardText = static_cast<char*>(GlobalLock(hClipboardData));
							string Control = clipboardText;

							if (clipboardText) {
								cout << "Clipboard Verisi: " << clipboardText << endl;
								cout << "Deneme Verisi: " << Control << endl;
								GlobalUnlock(hClipboardData);
								if (Control == "500 ") {
									CloseClipboard();
									goto come_here;
								}
								else if (Control == "10,000 ") {
									cout << "---[ 30000 Owo Coin Atiliyor! ]---" << endl;
									Sleep(random_number_start_3);
									owo_mause_event(417, 994);
									owo_30000();
									owo_press_enter();
									Sleep(random_number_start_10);
									owo_500();
									owo_press_enter();
									Sleep(random_number_start_11);
									owo_500();
									owo_press_enter();
									Sleep(random_number_3);
									owo_mause_event_double(588, 847);
									Sleep(1750);
									owo_ctrl_c();
									Sleep(1700);
									CloseClipboard();		// -> 60 bin ve 120 bin döndürür evlat
									if (OpenClipboard(nullptr)) {
										HANDLE hClipboardData = GetClipboardData(CF_TEXT);
										char* clipboardText = static_cast<char*>(GlobalLock(hClipboardData));
										string Control = clipboardText;
										if (clipboardText) {
											cout << "Clipboard Verisi: " << clipboardText << endl;
											cout << "Deneme Verisi: " << Control << endl;
											GlobalUnlock(hClipboardData);
											if (Control == "won ") {
												CloseClipboard();
												BALANCE += 30000;
												goto come_here;
											}
											else if (Control == "lost ") {
												CloseClipboard();
												BALANCE -= 30000;
												cout << "---[ 60000 Owo Coin Atiliyor! ]---" << endl;
												Sleep(random_number_start_4);
												owo_mause_event(417, 994);
												owo_60000();
												owo_press_enter();
												Sleep(random_number_start_12);
												owo_500();
												owo_press_enter();
												Sleep(random_number_start_13);
												owo_500();
												owo_press_enter();
												Sleep(random_number_4);
												owo_mause_event_double(588, 847);
												Sleep(1750);
												owo_ctrl_c();
												Sleep(1700);
												if (OpenClipboard(nullptr)) {
													HANDLE hClipboardData = GetClipboardData(CF_TEXT);
													char* clipboardText = static_cast<char*>(GlobalLock(hClipboardData));
													string Control = clipboardText;
													if (clipboardText) {
														cout << "Clipboard Verisi: " << clipboardText << endl;
														cout << "Deneme Verisi: " << Control << endl;
														GlobalUnlock(hClipboardData);
														if (Control == "won ") {
															CloseClipboard();
															BALANCE += 60000;
															goto come_here;
														}
														else if (Control == "lost ") {
															CloseClipboard();
															BALANCE -= 60000;
															cout << "---[ 120000 Owo Coin Atiliyor! ]---" << endl;
															Sleep(random_number_start_5);
															owo_mause_event(417, 994);
															owo_120000();
															owo_press_enter();
															Sleep(random_number_start_14);
															owo_500();
															owo_press_enter();
															Sleep(random_number_start_15);
															owo_500();
															owo_press_enter();
															Sleep(random_number_5);
															owo_mause_event_double(588, 847);
															Sleep(1750);
															owo_ctrl_c();
															Sleep(1700);
															if (OpenClipboard(nullptr)) {
																HANDLE hClipboardData = GetClipboardData(CF_TEXT);
																char* clipboardText = static_cast<char*>(GlobalLock(hClipboardData));
																string Control = clipboardText;
																if (clipboardText) {
																	cout << "Clipboard Verisi: " << clipboardText << endl;
																	cout << "Deneme Verisi: " << Control << endl;
																	GlobalUnlock(hClipboardData);
																	if (Control == "won ") {
																		CloseClipboard();
																		BALANCE += 120000;
																		goto come_here;
																	}
																	else if (Control == "lost ") {
																		CloseClipboard();
																		BALANCE -= 120000;
																		cout << "---[ 240000 Owo Coin Atiliyor! ]---" << endl;
																		Sleep(random_number_start_5);
																		owo_mause_event(417, 994);
																		owo_240000();
																		owo_press_enter();
																		Sleep(random_number_start_14);
																		owo_500();
																		owo_press_enter();
																		Sleep(random_number_start_15);
																		owo_500();
																		owo_press_enter();
																		Sleep(random_number_5);
																		owo_mause_event_double(588, 847);
																		Sleep(1750);
																		owo_ctrl_c();
																		Sleep(1700);
																		if (OpenClipboard(nullptr)) {
																			HANDLE hClipboardData = GetClipboardData(CF_TEXT);
																			char* clipboardText = static_cast<char*>(GlobalLock(hClipboardData));
																			string Control = clipboardText;
																			if (clipboardText) {
																				cout << "Clipboard Verisi: " << clipboardText << endl;
																				cout << "Deneme Verisi: " << Control << endl;
																				GlobalUnlock(hClipboardData);
																				if (Control == "won ") {
																					CloseClipboard();
																					BALANCE += 240000;
																					goto come_here;
																				}
																				else if (Control == "lost ") {
																					CloseClipboard();
																					BALANCE -= 240000;
																					goto come_here;
																				}
																			}
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
								else if (Control == "30,000 ") {
									CloseClipboard();
									cout << "---[ 60000 Owo Coin Atiliyor! ]---" << endl;
									Sleep(random_number_start_3);
									owo_mause_event(417, 994);
									owo_60000();
									owo_press_enter();
									Sleep(random_number_start_10);
									owo_500();
									owo_press_enter();
									Sleep(random_number_start_11);
									owo_500();
									owo_press_enter();
									Sleep(random_number_3);
									owo_mause_event_double(588, 847);
									Sleep(1750);
									owo_ctrl_c();
									Sleep(1700);
									CloseClipboard();		// Sadece 120 bin döndürür

									if (OpenClipboard(nullptr)) {
										HANDLE hClipboardData = GetClipboardData(CF_TEXT);
										char* clipboardText = static_cast<char*>(GlobalLock(hClipboardData));
										string Control = clipboardText;
										if (clipboardText) {
											cout << "Clipboard Verisi: " << clipboardText << endl;
											cout << "Deneme Verisi: " << Control << endl;
											GlobalUnlock(hClipboardData);
											if (Control == "won ") {
												BALANCE += 60000;
												CloseClipboard();
												goto come_here;
											}
											else if (Control == "lost ") {
												CloseClipboard();
												BALANCE -= 60000;
												cout << "---[ 120000 Owo Coin Atiliyor! ]---" << endl;
												Sleep(random_number_start_5);
												owo_mause_event(417, 994);
												owo_120000();
												owo_press_enter();
												Sleep(random_number_start_14);
												owo_500();
												owo_press_enter();
												Sleep(random_number_start_15);
												owo_500();
												owo_press_enter();
												Sleep(random_number_5);
												owo_mause_event_double(588, 847);
												Sleep(1750);
												owo_ctrl_c();
												Sleep(1700);
												if (OpenClipboard(nullptr)) {
													HANDLE hClipboardData = GetClipboardData(CF_TEXT);
													char* clipboardText = static_cast<char*>(GlobalLock(hClipboardData));
													string Control = clipboardText;
													if (clipboardText) {
														cout << "Clipboard Verisi: " << clipboardText << endl;
														cout << "Deneme Verisi: " << Control << endl;
														GlobalUnlock(hClipboardData);
														if (Control == "won ") {
															BALANCE += 120000;
															CloseClipboard();
															goto come_here;
														}
														else if (Control == "lost ") {
															CloseClipboard();
															BALANCE -= 120000;
															cout << "---[ 240000 Owo Coin Atiliyor! ]---" << endl;
															Sleep(random_number_start_5);
															owo_mause_event(417, 994);
															owo_240000();
															owo_press_enter();
															Sleep(random_number_start_14);
															owo_500();
															owo_press_enter();
															Sleep(random_number_start_15);
															owo_500();
															owo_press_enter();
															Sleep(random_number_5);
															owo_mause_event_double(588, 847);
															Sleep(1750);
															owo_ctrl_c();
															Sleep(1700);
															if (OpenClipboard(nullptr)) {
																HANDLE hClipboardData = GetClipboardData(CF_TEXT);
																char* clipboardText = static_cast<char*>(GlobalLock(hClipboardData));
																string Control = clipboardText;
																if (clipboardText) {
																	cout << "Clipboard Verisi: " << clipboardText << endl;
																	cout << "Deneme Verisi: " << Control << endl;
																	GlobalUnlock(hClipboardData);
																	if (Control == "won ") {
																		BALANCE += 240000;
																		CloseClipboard();
																		goto come_here;
																	}
																	else if (Control == "lost ") {
																		CloseClipboard();
																		BALANCE -= 240000;
																		goto come_here;
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
								else if (Control == "60,000 ") {
									CloseClipboard();
									cout << "---[ 120000 Owo Coin Atiliyor! ]---" << endl;
									Sleep(random_number_start_3);
									owo_mause_event(417, 994);
									owo_120000();
									owo_press_enter();
									Sleep(random_number_start_10);
									owo_500();
									owo_press_enter();
									Sleep(random_number_start_11);
									owo_500();
									owo_press_enter();
									Sleep(random_number_3);
									owo_mause_event_double(588, 847);
									Sleep(1750);
									owo_ctrl_c();
									Sleep(1700);
									CloseClipboard();		// Win veya Lost döndürür evüladül kaside.

									if (OpenClipboard(nullptr)) {
										HANDLE hClipboardData = GetClipboardData(CF_TEXT);
										char* clipboardText = static_cast<char*>(GlobalLock(hClipboardData));
										string Control = clipboardText;
										if (clipboardText) {
											cout << "Clipboard Verisi: " << clipboardText << endl;
											cout << "Deneme Verisi: " << Control << endl;
											GlobalUnlock(hClipboardData);
											if (Control == "won ") {
												CloseClipboard();
												goto come_here;
											}
											else if (Control == "lost ") {
												CloseClipboard();
												CloseClipboard();
												cout << "---[ 240000 Owo Coin Atiliyor! ]---" << endl;
												Sleep(random_number_start_5);
												owo_mause_event(417, 994);
												owo_240000();
												owo_press_enter();
												Sleep(random_number_start_14);
												owo_500();
												owo_press_enter();
												Sleep(random_number_start_15);
												owo_500();
												owo_press_enter();
												Sleep(random_number_5);
												owo_mause_event_double(588, 847);
												Sleep(1750);
												owo_ctrl_c();
												Sleep(1700);
												if (OpenClipboard(nullptr)) {
													HANDLE hClipboardData = GetClipboardData(CF_TEXT);
													char* clipboardText = static_cast<char*>(GlobalLock(hClipboardData));
													string Control = clipboardText;
													if (clipboardText) {
														cout << "Clipboard Verisi: " << clipboardText << endl;
														cout << "Deneme Verisi: " << Control << endl;
														GlobalUnlock(hClipboardData);
														if (Control == "won ") {
															CloseClipboard();
															goto come_here;
														}
														else if (Control == "lost ") {
															CloseClipboard();
															goto come_here;
														}
													}
												}
											}
										}
									}
								}
								else if (Control == "120,000 ") {
									CloseClipboard();
									cout << "---[ 240000 Owo Coin Atiliyor! ]---" << endl;
									Sleep(random_number_start_5);
									owo_mause_event(417, 994);
									owo_240000();
									owo_press_enter();
									Sleep(random_number_start_14);
									owo_500();
									owo_press_enter();
									Sleep(random_number_start_15);
									owo_500();
									owo_press_enter();
									Sleep(random_number_5);
									owo_mause_event_double(588, 847);
									Sleep(1750);
									owo_ctrl_c();
									Sleep(1700);
									if (OpenClipboard(nullptr)) {
										HANDLE hClipboardData = GetClipboardData(CF_TEXT);
										char* clipboardText = static_cast<char*>(GlobalLock(hClipboardData));
										string Control = clipboardText;
										if (clipboardText) {
											cout << "Clipboard Verisi: " << clipboardText << endl;
											cout << "Deneme Verisi: " << Control << endl;
											GlobalUnlock(hClipboardData);
											if (Control == "won ") {
												CloseClipboard();
												goto come_here;
											}
											else if (Control == "lost ") {
												CloseClipboard();
												goto come_here;
											}
										}
									}
								}
							}
						}
					}
				}
			}

		come_here:
			cout << "Dinleniyor 7 dk" << endl;
			Sleep(random_number_mola);    // -> 420.000 idi değeri
			TUR = 0;
		}

		system("cls");

		cout << "Programin Size Kazandirdigi Net Kazanc: " << BALANCE << endl << endl;
		cout << "Tur Sayisi: " << TUR << endl << endl;

		cout << "---[ 100 Owo Coin Atiliyor! ]---" << endl;
		Sleep(random_number_start);
		owo_mause_event(417, 994);  // -> yazım yerine basar.
		owo_500();
		owo_press_enter();
		Sleep(random_number_start_6);
		owo_500();
		owo_press_enter();
		Sleep(random_number_start_7);
		owo_500();
		owo_press_enter();
		Sleep(random_number);
		owo_mause_event_double(588, 847); // -> Won mu Lost mu kontrol eder.
		Sleep(1750);
		owo_ctrl_c();
		Sleep(1700);

		if (OpenClipboard(nullptr)) {
			HANDLE hClipboardData = GetClipboardData(CF_TEXT);
			char* clipboardText = static_cast<char*>(GlobalLock(hClipboardData));
			string Control = clipboardText;

			if (clipboardText) {
				cout << "Clipboard Verisi: " << clipboardText << endl;
				cout << "Deneme Verisi: " << Control << endl;
				GlobalUnlock(hClipboardData);
				if (Control == "won ") {
					CloseClipboard();
					TUR += 1;
					BALANCE += 500;
					if (TUR == 25) {
						goto tur_pornosu;
					}
					goto f;
				}
				else if (Control == "lost ") {
					CloseClipboard();
					TUR += 1;
					BALANCE -= 500;
					if (TUR == 25) {
						goto tur_pornosu;
					}
					cout << "---[ 10000 Owo Coin Atiliyor! ]---" << endl;
					Sleep(random_number_start_2);
					owo_mause_event(417, 994);
					owo_10000();
					owo_press_enter();
					Sleep(random_number_start_8);
					owo_500();
					owo_press_enter();
					Sleep(random_number_start_9);
					owo_500();
					owo_press_enter();
					Sleep(random_number_2);
					owo_mause_event_double(588, 847);
					Sleep(1750);
					owo_ctrl_c();
					Sleep(1700);
					if (OpenClipboard(nullptr)) {
						HANDLE hClipboardData = GetClipboardData(CF_TEXT);
						char* clipboardText = static_cast<char*>(GlobalLock(hClipboardData));
						string Control = clipboardText;
						if (clipboardText) {
							cout << "Clipboard Verisi: " << clipboardText << endl;
							cout << "Deneme Verisi: " << Control << endl;
							GlobalUnlock(hClipboardData);
							if (Control == "won ") {
								CloseClipboard();
								TUR += 1;
								BALANCE += 10000;
								if (TUR == 25) {
									goto tur_pornosu;
								}
								goto f;
							}
							else if (Control == "lost ") {
								CloseClipboard();
								TUR += 1;
								BALANCE -= 10000;
								if (TUR == 25) {
									goto tur_pornosu;
								}
								cout << "---[ 30000 Owo Coin Atiliyor! ]---" << endl;
								Sleep(random_number_start_3);
								owo_mause_event(417, 994);
								owo_30000();
								owo_press_enter();
								Sleep(random_number_start_10);
								owo_500();
								owo_press_enter();
								Sleep(random_number_start_11);
								owo_500();
								owo_press_enter();
								Sleep(random_number_3);
								owo_mause_event_double(588, 847);
								Sleep(1750);
								owo_ctrl_c();
								Sleep(1700);
								if (OpenClipboard(nullptr)) {
									HANDLE hClipboardData = GetClipboardData(CF_TEXT);
									char* clipboardText = static_cast<char*>(GlobalLock(hClipboardData));
									string Control = clipboardText;
									if (clipboardText) {
										cout << "Clipboard Verisi: " << clipboardText << endl;
										cout << "Deneme Verisi: " << Control << endl;
										GlobalUnlock(hClipboardData);
										if (Control == "won ") {
											CloseClipboard();
											TUR += 1;
											BALANCE += 30000;
											if (TUR == 25) {
												goto tur_pornosu;
											}
											goto f;
										}
										else if (Control == "lost ") {
											CloseClipboard();
											TUR += 1;
											BALANCE -= 30000;
											if (TUR == 25) {
												goto tur_pornosu;
											}
											cout << "---[ 60000 Owo Coin Atiliyor! ]---" << endl;
											Sleep(random_number_start_4);
											owo_mause_event(417, 994);
											owo_60000();
											owo_press_enter();
											Sleep(random_number_start_12);
											owo_500();
											owo_press_enter();
											Sleep(random_number_start_13);
											owo_500();
											owo_press_enter();
											Sleep(random_number_4);
											owo_mause_event_double(588, 847);
											Sleep(1750);
											owo_ctrl_c();
											Sleep(1700);
											if (OpenClipboard(nullptr)) {
												HANDLE hClipboardData = GetClipboardData(CF_TEXT);
												char* clipboardText = static_cast<char*>(GlobalLock(hClipboardData));
												string Control = clipboardText;
												if (clipboardText) {
													cout << "Clipboard Verisi: " << clipboardText << endl;
													cout << "Deneme Verisi: " << Control << endl;
													GlobalUnlock(hClipboardData);
													if (Control == "won ") {
														CloseClipboard();
														TUR += 1;
														BALANCE += 60000;
														if (TUR == 25) {
															goto tur_pornosu;
														}
														goto f;
													}
													else if (Control == "lost ") {
														CloseClipboard();
														TUR += 1;
														BALANCE -= 60000;
														if (TUR == 25) {
															goto tur_pornosu;
														}
														cout << "---[ 120000 Owo Coin Atiliyor! ]---" << endl;
														Sleep(random_number_start_5);
														owo_mause_event(417, 994);
														owo_120000();
														owo_press_enter();
														Sleep(random_number_start_14);
														owo_500();
														owo_press_enter();
														Sleep(random_number_start_15);
														owo_500();
														owo_press_enter();
														Sleep(random_number_5);
														owo_mause_event_double(588, 847);
														Sleep(1750);
														owo_ctrl_c();
														Sleep(1700);
														if (OpenClipboard(nullptr)) {
															HANDLE hClipboardData = GetClipboardData(CF_TEXT);
															char* clipboardText = static_cast<char*>(GlobalLock(hClipboardData));
															string Control = clipboardText;
															if (clipboardText) {
																cout << "Clipboard Verisi: " << clipboardText << endl;
																cout << "Deneme Verisi: " << Control << endl;
																GlobalUnlock(hClipboardData);
																if (Control == "won ") {
																	CloseClipboard();
																	TUR += 1;
																	BALANCE += 120000;
																	if (TUR == 25) {
																		goto tur_pornosu;
																	}
																	goto f;
																}
																else if (Control == "lost ") {
																	CloseClipboard();
																	TUR += 1;
																	BALANCE -= 120000;
																	if (TUR == 25) {
																		goto tur_pornosu;
																	}
																	cout << "---[ 240000 Owo Coin Atiliyor! ]---" << endl;
																	Sleep(random_number_start_5);
																	owo_mause_event(417, 994);
																	owo_240000();
																	owo_press_enter();
																	Sleep(random_number_start_14);
																	owo_500();
																	owo_press_enter();
																	Sleep(random_number_start_15);
																	owo_500();
																	owo_press_enter();
																	Sleep(random_number_5);
																	owo_mause_event_double(588, 847);
																	Sleep(1750);
																	owo_ctrl_c();
																	Sleep(1700);
																	if (OpenClipboard(nullptr)) {
																		HANDLE hClipboardData = GetClipboardData(CF_TEXT);
																		char* clipboardText = static_cast<char*>(GlobalLock(hClipboardData));
																		string Control = clipboardText;
																		if (clipboardText) {
																			cout << "Clipboard Verisi: " << clipboardText << endl;
																			cout << "Deneme Verisi: " << Control << endl;
																			GlobalUnlock(hClipboardData);
																			if (Control == "won ") {
																				CloseClipboard();
																				TUR += 1;
																				BALANCE += 240000;
																				if (TUR == 25) {
																					goto tur_pornosu;
																				}
																				goto f;
																			}
																			else if (Control == "lost ") {
																				CloseClipboard();
																				TUR += 1;
																				BALANCE -= 240000;
																				if (TUR == 25) {
																					goto tur_pornosu;
																				}
																				goto f;
																			}
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}

				else {
					cerr << "Clipboard verisi alınamadı." << endl;
				}
			f:
				CloseClipboard();
				goto g;
			}
			else {
				cerr << "Clipboard açılamadı." << endl;
			}

		}

	}
}
	

	

