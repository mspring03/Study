# C언어 공부

2019-07-12

---

### 전역변수

---

전역변수와 이름이 같은 변수가 있는 경우에 그 함수 안에서는 전역변수가 아닌 함수를 가리킨다.

```c
int a;

void main(){
    int a = 19;
    printf("%d", a);
}
```

이 경우에 전역변수와 main 안의 변수 a의 이름이 같다.

```cmd
출력

19
```

---

### static 변수

---

지역변수처럼 선언한 함수 안에서만 활용가능

전역변수처럼 한 번만 초기화 됨

```c
#include<stdio.h>

int aa() {
	static int a = 0;
	return ++a;
}

void main() {
	printf("%d\n", aa());
	printf("%d\n", aa());
}
```

static 변수 a는 처음 0으로 초기화 된 후 초기화 되지 않음

````cmd
출력

1
2
````

---

---

### register 변수

---

```c
void main(){
    register int a;
}
```

레지스터는 cpu에 있는 작고 빠른 메모리이다.

빠르게 불러올 필요가 있는 변수를 이렇게 선언한다.

레지스터는 작기 때문에 전역변수로 register 변수는 선언할 수 없다.

---

