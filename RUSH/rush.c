#include <unistd.h>

void ft_putchar(char c){
	write(1,&c,1);
}

void draw_line(int len, char first_char, char middle_char, char last_char){
	ft_putchar(first_char);
	while ((len - 1) > 1){
		ft_putchar(middle_char);
		len--;
	}
	if (len > 1){
		ft_putchar(last_char);
	}
	ft_putchar('\n');
}

void rush(int x,int y){
	int MAX_INT;
	MAX_INT = 2147483647;
	if (x < MAX_INT && y < MAX_INT){
		if (x > 0 && y > 0 ){
			draw_line(x,'A','B','C');
			y--;
			while (y > 1){
				draw_line(x,'B',' ','B');
				y--;
			}
			if (y > 0){
				draw_line(x,'C','B','A');
			}
		}
	}
}

int main(){
	rush(5,-21474836485236);
	return (0);
}
