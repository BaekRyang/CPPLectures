# Labs - 제어문 

0. 다음 프로그램의 실행하고 실행 결과로 부터 변수의 유효 범위를 추론하라.
```c++
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int a = 10;
	{
		int a = 20;
		cout << "a(1): " << a << endl;
	}
	{
		int a = 30;
		cout << "a(2): " << a << endl;
	}
	{
		int a = 40;
		{
			cout << "a(3): " << a << endl;
 		}
 		cout << "a(4): " << a << endl;
	}
	cout << "a(5): " << a << endl;

	return 0;
}
```

1. 다음 프로그램 코드를 실행 시켰을 때 90을 입력하였을 때 ***100 이하 정수이다*** 가 화면에 출력되고 110을 입력하였을 때 ***100 초과 정수이다*** 가 화면에 출력되는지 확인하라. 
결과가 지정한대로 출력되지 않는다면 이유를 추론하라.

```c++
#include <iostream>
using namespace std;


int main(int argc, char const *argv[])
{
	int input;
	cout << "정수를 입력하시오: ";
	cin >> input;

	if(input <= 100) {
		cout << "100 이하 정수이다" << endl;
	}

	cout << "100 초과 정수이다" << endl;

	return 0;
}
```

2. 1의 결과가 원하는대로 출력이 되도록 프로그램 코드를 수정하라.

3. 다음 프로그램 코드는 입력 값이 15일 때 ***입력한 값은 15, 10보다 큰 정수이다*** 라고 출력이 되고 입력 값이 5 일 때 ***10보다 작은 정수이다*** 가 출력이 되도록 작성한 것이다.
   컴파일 시 에러가 발생한다. 원인을 추론하고 원하는 결과가 나오도록 프로그램을 수정하라.  

```c++
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int value;

	cout << "정수를 입력하시오: ";
	cin >> value;

	if(value > 10) 	
		cout << "입력한 값은 " << value << endl;
		cout << "10보다 큰 정수이다" << endl;
	else 
		cout << "10보다 작은 정수이다" << endl;

	return 0;
}
```

4. 다음 프로그램 실행 시 짝수가 입력되면 ***짝수 이다.*** 가 출력되고 홀수가 입력되면 ***홀수 아다.*** 가 출력되도록 ***A*** 또는 ***B*** 출력 부분을 수정하라. 그리고 프로그램 결과를 분석하라.

```c++
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int value;

	cout << "정수를 입력하시오: ";
	cin >> value;

	if(value % 2)
		cout << " A " << endl;
	else 
		cout << " B " << endl;
	return 0;
}
```

5. 4번의 프로그램 코드를 수정하여 입력한 정수가 3의 배수 인지 아닌지를 판펼하는 프로그램을 작성하라.

6. 다음 프로그램 코드는 입력으로 A, B, C 문자 중 하나가 입력이 되면 각각 ***A가 입력***, ***B가 입력***, ***C가 입력*** 라고 화면에 출력이 되고 이 외의 문자가 입력되면 ***원하는 문자가 아니다*** 라고 출력하려는 것이다. 원하는 결과가 나오도록 프로그램을 수정하라.  

```c++
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	char ch;
	cout << "A, B, C 문자 중 하나를 입력하시오:";
	cin >> ch;

	switch (ch) {
		case A:
			cout << "A가 입력" << endl;
		case B:
			cout << "B가 입력" << endl;
		case C:
			cout << "C가 입력" << endl;
		default:
			cout << "원하는 문자가 아니다" << endl;

	}

	return 0;
}
```

7. 6번 프로그램 코드를 수정하여 대문자 A와 소문자 a가 입력되면  ***A가 입력***, 대문자 B와 소문자 b가 입력되면 ***B가 입력***, 대문자 C와 소문자 c가 입력되면 ***C가 업력*** 이라 출력되도록 수정하라. 

8. 다음 프로그램 코드는 1에서 3 사이의 정수가 입력되었는지 확인하고 각 각에 대해 화면에 출력하고 그 외의 수가 입력 되었다고 화면에 출력하려고 한다. 프로그램을 실행하였을 때 원하는 결과를 보이는지 확인하고 원하는 결과가 나오지 않으면 이유를 추론하고 올바르게 수정하라. 

```c++
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int value;
	cout << "1 ~ 3 중의 정수를 입력하시오: ";
	cin >> value;

	switch(value){
		case '1':
			cout << "1이 입력" << endl;
			break;
		case '2':
			cout << "2가 입력" << endl;
			break;
		case '3':
			cout << "3이 입력" << endl;
			break;
		default:
			cout << "원하는 수가 아니다" << endl;		
	}

	return 0;
}
```

9. 다음 프로그램 코드를 실행 시 반복되는 문장이 무엇인지 답하고 반복되는 횟수를 추론할 수 있는가? 또한 반복의 종료 조건은 무엇인가?

```c++
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int input;
	do {
		cout << "정수를 입력하시오: ";
		cin >> input;
		cout << "입력값: " << input << endl;
	}while(input != 0);
	
	return 0;
}
```

10. 다음 프로그램 코드를 실행하고 반복 횟수만큼 실행이 되는지 확인하고 반복 횟수보다 둘 적은 횟수로 반복되도록 코드를 수정하라. 

```c++
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int count = 0, num;
	cout << "반복 횟수를 입력하시오: ";
	cin >> num;

	while(count < num) {
		cout << "repeat (" << count << ")" << endl;
		count++;
	}
	return 0;
}
```
							  
11. 다음 프로그램 실핼 결과를 추론하고 이유를 기술하시오.							  

```c++
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	for(int i = 0; i < 10; i++){
		if(i == 3 || i == 6) continue;
		cout << i << ", ";
	}
	cout << endl;
	return 0;
}							  							  
```
		    
12. 다음 프로그램 실핼 결과를 추론하고 이유를 기술하시오.							  

```c++
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	for(int i = 0; i < 10; i++){
		if(i == 3 || i == 6) break;
		cout << i << ", ";
	}
	cout << endl;
	return 0;
}							  							  
```

13. 다음 프로그램 코드의 실행 결과가 다음과 같이 되도록 프로그램을 완성하라.

```
0, 1, 2, 3, 0, 1, 2, 3, 0, 1
```

```c++
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	for(int i = 0; i < 10; i++){
        // 프포그램 코드가 들어가야 할 영역 
	}
	cout << endl;	

	return 0;
}
```
		    
14. 다음은 1에서 10까지의 정수를 더하는 프로그램 코드이다. 이를 반복문을 사용하여 1에서 10까지 정수를 더하는 프로그램을 작성하라.
프로그램의 실행 결과는 다음과 같아야 한다.

```bash
(1): 1+2+3+4+5+6+7+8+9+10 = 55
(2): 1+2+3+4+5+6+7+8+9+10 = 55
```

```c++
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	
	int sum;
	sum = 1+2+3+4+5+6+7+8+9+10;  // 1 ~ 10 까지의 정수 더하기 

	cout << "(1): 1+2+3+4+5+6+7+8+9+10 = " << sum << endl;
	
	sum = 0;
	for(int i = 1; i <= 10; i++){
		// 프로그램 코드 영역 (1 ~ 10 까지의 정수 더하는 코드)

        }
	cout << "(2): 1+2+3+4+5+6+7+8+9+10 = " << sum << endl;

	return 0;
}
```

15. 14번 코드를 기반으로 1에서 10까지의 곱을 구하는 코드를 작성하라.

16. 14번의 코드를 1에서 16까지 곱과 1에서 17까지의 곲을 구하고 원하는 결과가 나오는지 확인하라. 원하는 결과가 나오지 않는 이유와 해결책을 제시하라. 

17. 다음과 같이 두 수를 입력 받아 두 수가 같으면 "두수는 같다.", 같지 않다면 "X는(은) Y보다 크다" 라고 출력되도록 프로그램을 작성하라.

실행 예
```bash
두수를 입력하라.
20
20
두수는 같다.
```
```bash
두수를 입력하라.
20
30
30은(는) 20보다 크다.
```
```c++
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int data1, data2;

	cout <<"두 수를 입력하라."
	
	cin >> data1 >> data2;

	// 아래에 프로그램을 작성하라. 

	return 0;
}
```
18. 다음 프로그램은 무엇을 하는 프로그램인지 추론하라. 

```c++
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int data, res;
	int sum = 0;
	cin >> data;

	do{
		res = data % 10;
		cout << "data: " << data << ", res: " << res << endl;
		data /= 10;
		sum += res;
		if(data < 10) sum += data;
	}while(data >= 10);
	cout << "data: " << data << " sum: " << sum << endl; 

	return 0;
}
```
19. 다음 조건문의 실행 결과를 실행 후 ```if 문``` 다음의 주석문의 ```//```을 제거하고 컴파일 하였을 때 오류가 발생한다면 이유를 추론하라.

```c++
#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char const *argv[])
{
	srand(time(NULL)); // set seed of random number generator
	
	if(int rnum = rand(); rnum % 2 == 0) {
		cout << rnum << " 은 짝수 이다.";
	}
	else{
		cout << rnum << " 은 홀수 이다.";
	}

	//cout << "rnum: " << rnum << endl;

	return 0;
}
```
