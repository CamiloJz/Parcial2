/**
 * @file main.cpp
 * @brief Programa principal que demuestra el uso de CuentaBancaria
 */

 #include <iostream>
 #include "CuentaBancaria.h"
 
 int main() {
     try {
         // Crear una cuenta bancaria
         CuentaBancaria cuenta(1000.0f, "ES76 2100 0418 4012 3456 7890");
         
         std::cout << "Cuenta creada con saldo inicial: " << cuenta.obtenerSaldo() << std::endl;
         std::cout << "Número de cuenta: " << cuenta.obtenerNumeroCuenta() << std::endl;
         
         // Realizar operaciones
         cuenta.depositar(500.0f);
         std::cout << "Después de depositar 500.0, saldo: " << cuenta.obtenerSaldo() << std::endl;
         
         if (cuenta.retirar(200.0f)) {
             std::cout << "Retiro exitoso. Saldo restante: " << cuenta.obtenerSaldo() << std::endl;
         } else {
             std::cout << "No se pudo realizar el retiro" << std::endl;
         }
         
         // Bloquear retiros
         cuenta.bloquearRetiros(true);
         if (!cuenta.retirar(100.0f)) {
             std::cout << "Retiros bloqueados correctamente" << std::endl;
         }
         
     } catch (const std::invalid_argument& e) {
         std::cerr << "Error: " << e.what() << std::endl;
         return 1;
     }
     
     return 0;
 }