/**
 * @file CuentaBancaria.h
 * @brief Definición de la clase CuentaBancaria
 */

 #ifndef CUENTA_BANCARIA_H
 #define CUENTA_BANCARIA_H
 
 #include <string>
#include <stdexcept>
 
 /**
  * @class CuentaBancaria
  * @brief Representa una cuenta bancaria con operaciones básicas
  */
 class CuentaBancaria {
 private:
     float saldo;                ///< Saldo actual de la cuenta
     std::string numeroCuenta;   ///< Número identificador de la cuenta
     bool retirosBloqueados;     ///< Estado de bloqueo de retiros
 
 public:
     /**
      * @brief Constructor que inicializa una cuenta bancaria
      * @param saldoInicial Saldo inicial de la cuenta
      * @param numCuenta Número de cuenta identificador
      */
     CuentaBancaria(float saldoInicial, const std::string& numCuenta);
 
     /**
      * @brief Deposita una cantidad en la cuenta
      * @param cantidad Cantidad a depositar (debe ser positiva)
      */
     void depositar(float cantidad);
 
     /**
      * @brief Retira una cantidad de la cuenta si hay fondos suficientes
      * @param cantidad Cantidad a retirar (debe ser positiva)
      * @return true si el retiro fue exitoso, false en caso contrario
      */
     bool retirar(float cantidad);
 
     /**
      * @brief Bloquea o desbloquea los retiros de la cuenta
      * @param bloquear true para bloquear retiros, false para desbloquear
      */
     void bloquearRetiros(bool bloquear);
 
     /**
      * @brief Obtiene el saldo actual de la cuenta
      * @return El saldo actual como float
      */
     float obtenerSaldo() const;
 
     /**
      * @brief Obtiene el número de cuenta
      * @return El número de cuenta como string
      */
     std::string obtenerNumeroCuenta() const;
 };
 
 #endif // CUENTA_BANCARIA_H