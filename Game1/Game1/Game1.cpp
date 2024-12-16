// Game1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//
#include"Character.h"
#include"Enemy.h"
#include <iostream>

int main()
{
    Character* character = new Character(20, 3); // 생성자

	for (int i = 0; i < 3; i++)
	{
		Enemy* enemy = nullptr;
		switch (i)
		{
		case 0:
			enemy = new Enemy(3, 1, "잡몹", false);
			std::cout << "잡몹을 만났습니다." << std::endl;
			break;
		case 1:
			enemy = new Enemy(5, 3, "네임드", true);
			std::cout << "네임드몹을 만났습니다." << std::endl;
			break;
		case 2:
			enemy = new Enemy(5, 6, "보스", true);
			std::cout << "보스를 만났습니다." << std::endl;
			break;
		}

		enemy->SetPosition(5);

		character->SetPosition(0);

		while (enemy != nullptr)
		{
			std::cout << "내위치 : " << character->GetPosition() << " 적위치 : " << enemy->GetPosition() << std::endl;

			char input;
			std::cin >> input;

			if (input == 'e')
			{
				std::cout << "도망쳤습니다." << std::endl;
				break;
			}
			else if (input == 'a')
			{
				if (enemy->GetPosition() == character->GetPosition() + 1)
				{
					character->Attack(enemy);

				}
				else
				{
					std::cout << "공격을 했으나 닿지 않습니다." << std::endl;
				}


			}
			else if (input == 'f')
			{
				if (enemy->GetPosition() > character->GetPosition() + 1)
				{
					character->Move(true);
				}
				else
				{
					std::cout << "적이 가로막고있습니다." << std::endl;
				}

			}
			else if (input == 'b')
			{
				if (0 < character->GetPosition())
				{
					character->Move(false);
				}
				else
				{
					std::cout << "막다른 골목입니다." << std::endl;

				}
			}

			else if (input == 'h')
			{
				character->Heal();
			}


			if (enemy->GetHP() <= 0)
			{
				delete(enemy);
				enemy = nullptr;
			}

			if (enemy == nullptr)
			{
				break;
			}

			if (enemy->GetPosition() == character->GetPosition() + 1)
			{
				enemy->Attack(character);
			}
			else
			{
				enemy->Move(true);
			}

			if (character->GetHP() <= 0)
			{
				delete(character);
				character = nullptr;
			}

			if (character == nullptr)
			{
				break;
			}
		}

		if (character == nullptr)
		{
			break;
		}
	}

	std::cout << "게임 끝" << std::endl;

}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
