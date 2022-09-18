/**
 * main - foo
 *
 * Description: main
 * Return: 0
 */

int main(void) {
        int i = 0, result = 0;
        for (i = 0; i < 1024; i++) {
                if((i % 3 == 0) || (i % 5 == 0))
                {
                        result += i;
                }
        }
        printf("%d\n", result);
        return (0);
}
