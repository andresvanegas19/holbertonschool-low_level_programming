C 
- Usamos un comando de compilacion
	se usa el flag -E para saber en ver que hace el processor
	ahora con el flag -c en gcc podemos ver que hace el ensamblador y detener el proceso 
	usare la flag -o para ver que utiliza el codigo assembled
	usar -o para cambiarle el nombre al archivo modificado
int integro;
        float flotante;
        long int integrolargo;
        long long int integromaslargo;
        char charType;

        printf("Size of a char: %ld byte(s)\n", sizeof(charType));
        printf("Size of an int: %ld byte(s)\n", sizeof(integro));
        printf("Size of a long init: %ld byte(s)\n", sizeof(integrolargo));
        printf("Size of a long long init: %ld byte(s)\n", sizeof(integromaslargo));
        printf("Size of a float: %ld byte(s)\n", sizeof(flotante));
Size of a char: 1 byte(s)
Size of an int: 4 byte(s)
Size of a long int: 4 byte(s)
Size of a long long int: 8 byte(s)
Size of a float: 4 byte(s)
julien@ubuntu:~/c/0x00$ ./size64
Size of a char: 1 byte(s)
Size of an int: 4 byte(s)
Size of a long int: 8 byte(s)
Size of a long long int: 8 byte(s)
Size of a float: 4 byte(s)
con written lo reemplazamos para que imprima igual que printf
