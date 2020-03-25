#include <iostream>

int main()
{
  char c;
  
  while( std::cin.get(c))
    { 
      switch (c)
	{
	case 'B':
	  std::cout << 'v';
	  break;
	case 'C':
	  std::cout << 'X';
	  break;
	case 'D':
	  std::cout << 'S';
	  break;
	case 'E':
	  std::cout << 'W';
	  break;
	case 'F':
	  std::cout << 'D';
	  break;
	case 'G':
	  std::cout << 'F';
	  break;
	case 'H':
	  std::cout << 'G';
	  break;
	case 'I':
	  std::cout << 'U';
	  break;
	case 'J':
	  std::cout << 'H';
	  break;
	case 'K':
	  std::cout << 'J';
	  break;
	case 'L':
	  std::cout << 'K';
	  break;
	case 'M':
	  std::cout << 'N';
	  break;
	case 'N':
	  std::cout << 'B';
	  break;
	case 'O':
	  std::cout << 'I';
	  break;
	case 'P':
	  std::cout << 'O';
	  break;
	case 'R':
	  std::cout << 'E';
	  break;
	case 'S':
	  std::cout << 'A';
	  break;
	case 'T':
	  std::cout << 'R';
	  break;
	case 'U':
	  std::cout << 'Y';
	  break;
	case 'V':
	  std::cout << 'C';
	  break;
	case 'W':
	  std::cout << 'Q';
	  break;
	case 'X':
	  std::cout << 'Z';
	  break;
	case 'Y':
	  std::cout << 'T';
	  break;
	case '1':
	  std::cout << '`';
	  break;
	case '2':
	  std::cout << '1';
	  break;
	case '3':
	  std::cout << '2';
	  break;
	case '4':
	  std::cout << '3';
	  break;
	case '5':
	  std::cout << '4';
	  break;
	case '6':
	  std::cout << '5';
	  break;
	case '7':
	  std::cout << '6';
	  break;
	case '8':
	  std::cout << '7';
	  break;
	case '9':
	  std::cout << '8';
	  break;
	case '0':
	  std::cout << '9';
	  break;
	case '-':
	  std::cout << '0';
	  break;
	case '=':
	  std::cout << '-';
	  break;
	case '[':
	  std::cout << 'P';
	  break;
	case ']':
	  std::cout << '[';
	  break;
	case '\\':
	  std::cout << ']';
	  break;
	case ',':
	  std::cout << 'M';
	  break;
	case '.':
	  std::cout << ',';
	  break;
	case '/':
	  std::cout << '.';
	  break;
	case ';':
	  std::cout << 'L';
	  break;
	case '\'':
	  std::cout << ';';
	  break;
	default:
	  std::cout << c;
	}
    }
}
