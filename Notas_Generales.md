ssh -i nombrellave.pem usuario@servidor.com -o ServerAliveInterval=30 -> Permite acceder al servidor desde la terminal de linux o macos

chmod 600 nombrellave.pem -> Modifica la visualización del archivo .pem, para que el servidor lo considere seguro



git init -> Inicializa git en la carpeta activa
git status -> Muestra un informe de estado del repositorio
git remote add nombrecorto url -> Crea atajos para realizar conexiones remotas a repositiorios de git

git add archivo.extension -> Añade un archivo o directorio al sistema de versiones
git commit -m 'mensaje' -> 
git push -u nombrecorto main -> Envia archivos al repositorio deseado

# C

nano -T 4 /path/to/file -> Permite establecer el número de espacio de una tabulación
gcc nombreprograma.c -o nombreprograma -> Compila el programa en cuestión
gcc nombreprograma.c -o nombreprograma -lm -> Compila un programa con  la libreria Math.h

./nombreprograma -> Ejecuta un programa compilado

M_PI -> Representa al número pi cuando se usa la libreria math.h
pow(base, potencia) -> eleva cierta base a la potencia deseada


