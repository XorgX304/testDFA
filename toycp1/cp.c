#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

#define src "./src.txt"
#define dst "./dst.txt"

struct SA{
//	int a;
//	long b;
//	char c[9];
	char d[5];
};

struct SB{
//	float a;
	int b;
	struct SA c;
	struct SA c1;
	char c2[3];
	struct SA* d;
};


int main(int argc, char **argv)
{
	struct SB _sb[2];
	(_sb[1].c.d)[2]=0;
//	struct SB _sa;
//	(_sa.c.d)[2]='Y';
//	_sa[1].d=NULL;
	long ll=0;
	printf("size of long: %d\n",sizeof(long));
        int fs1 = open(argv[1], O_RDONLY);
        int fs2 = open(argv[2], O_RDONLY);
        int fd = open(argv[3], O_WRONLY);
	int fd2= open(argv[4], O_WRONLY);
        void * pp = malloc(20);
        void * p=pp+4;
	void * p2=malloc(16);
        ssize_t rc = read(fs2, p, 4);
        rc = read(fs1, p2, 4);
//        int a=*((int*)p)+*((int*)p+1);
//        int b=*((int*)p)**((int*)p+1);
//        *((int*)p+2)=a;
//        *((int*)p+3)=b;
        write(fd, p, 16);
	write(fd2,p2,16);

        close(fs1);
        close(fs2);
        close(fd);
	close(fd2);
        free(pp);
        return 0;
}

