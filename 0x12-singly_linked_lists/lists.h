#ifndef _LISTS_H_
#define _LISTS_H_

typedef struct list_t {
	char *str;
	int len;
	struct list_t *next;
}list_t;

#include <stddef.h>

size_t print_list(const list_t *h);

#endif /* _LISTS_H_ */
