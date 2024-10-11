/* Nordic Dev Academy
    nRF Connect SDK Fundamentals
    Lesson 3 - Exercise 1
    Umut                */

#include <zephyr/kernel.h>
#include <zephyr/sys/printk.h>


int main(void)
{
	while (1) {
		printk("Hello World!\n");
		k_msleep(1000);
	}
}