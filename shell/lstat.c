#include <stdio.h>
#include <sys/stat.h>

/**
 * main - return a value if the P_W
 * lstat - return 0 for succes and -1 for faild process
 */

int main()
{
	const char *path = "/path/testeurs_all_function/lstat.c";
	struct stat file_info;

    if (lstat(path, &file_info) == 0) {
        // Obtention des informations sur le fichier
        printf("Taille du fichier : %lld octets\n", (long long)file_info.st_size);
        printf("Permissions : %o\n", file_info.st_mode & 0777);
        // ... Autres informations disponibles dans la structure struct stat
    } else {
        // Gestion de l'erreur
        perror("lstat");
    }

    return (0);
}
