#include <iostream>
#include <string>
#include <windows.h>
#include <stdlib.h>

using namespace std;

class Box
{
private:
	int xPos;
	int yPos;
	int width;
	int height;

public:
	Box(int x = 0, int y = 0, int w = 0, int h = 0)
	{
		xPos = x;
		yPos = y;
		width = w;
		height = h;
	}

	void setPos(int x, int y) { xPos = x; yPos = y; }

	int getXPos() const { return xPos; }
	int getYPos() const { return yPos; }
	int getWidth() const { return width; }
	int getHeight() const { return height; }
};

//prototype string
string stringBox(Box box, char c);

int main()
{
	Box box(10, 7, 7, 12);

	char c = 'x';

	cout << stringBox(box, c);

	cin.get();

	system("CLS");

	box.setPos(box.getXPos() + 5, box.getYPos() - 5);
	cout << stringBox(box, c);

	cin.get();
}

//creates string representing box
string stringBox(Box box, char c)
{
	string leftPadding;

	string output;

	for (int i = 0; i < box.getYPos(); i++)
	{
		output += "\n";
	}

	for (int i = 0; i < box.getXPos(); i++)
	{
		leftPadding += " ";
	}

	output += leftPadding;

	for (int i = 0; i < box.getHeight(); i++)
	{

		for (int j = 0; j < box.getWidth(); j++)
		{
			output = output + c;
		}

		output = output + "\n" + leftPadding;
	}

	return output;
}





