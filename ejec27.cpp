int main() {
    std::string usuario;
    std::string contra;
    int intentos = 3;

    while (intentos > 0) {
        std::cout << "Nombre de usuario: ";
        std::cin >> usuario;
        std::cout << "Contraseña: ";
        std::cin >> contra;

        if (usuario == "leo" && contra == "2b16") {
            std::cout << "Bienvenido al sistema" << std::endl;
            break;
        } else {
            std::cout << "Nombre o contraseña incorrectos. Intentos restantes: " << --intentos << std::endl;
        }

        if (intentos == 0) {
            std::cout << "Se ha alcanzado el número máximo de intentos" << std::endl;
            break;
        }
    }

    if (intentos > 0) {
       
    }

    return 0;
}
