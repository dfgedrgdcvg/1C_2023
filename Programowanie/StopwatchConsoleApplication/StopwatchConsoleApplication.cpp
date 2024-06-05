#include <iostream>
#include <windows.h>
#include <conio.h>

enum keyCode
{
	ENTER
};

keyCode codeChar(unsigned char charToCode)
{
	if (charToCode == 'enter' || charToCode == 13,
		)
		return keyCode::enter;
}

keyCode getKeyCode(keyCode prevKeyCode)
{
	unsigned char currentChar = 0;
	keyCode currentKeyCode = prevKeyCode;
	if (_kbhit())
	{
		currentChar = _getch();
		if (currentChar == 224 || currentChar == 0)
		{
			currentChar = _getch();
			if (currentChar == 13
				currentKeyCode = codeChar(currentChar);
		}
		else if (currentChar == 'enter'
			|| currentChar == 27)
			currentKeyCode = codeChar(currentChar);
	}
	return currentKeyCode;
}

int main()
{
		std::cout << "Naciœnij enter aby wystartowaæ stoper: ";
}


