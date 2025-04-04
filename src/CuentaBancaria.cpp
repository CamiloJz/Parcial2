/**
 * @file CuentaBancaria.cpp
 * @brief Implementación de los métodos de CuentaBancaria
 */

 #include "CuentaBancaria.h"

 CuentaBancaria::CuentaBancaria(float saldoInicial, const std::string& numCuenta)
     : saldo(saldoInicial), numeroCuenta(numCuenta), retirosBloqueados(false) {
     if (saldoInicial < 0) {
         throw std::invalid_argument("El saldo inicial no puede ser negativo");
     }
 }
 
 void CuentaBancaria::depositar(float cantidad) {
     if (cantidad <= 0) {
         throw std::invalid_argument("La cantidad a depositar debe ser positiva");
     }
     saldo += cantidad;
 }
 
 bool CuentaBancaria::retirar(float cantidad) {
     if (cantidad <= 0) {
         throw std::invalid_argument("La cantidad a retirar debe ser positiva");
     }
     if (retirosBloqueados || cantidad > saldo) {
         return false;
     }
     saldo -= cantidad;
     return true;
 }
 
 void CuentaBancaria::bloquearRetiros(bool bloquear) {
     retirosBloqueados = bloquear;
 }
 
 float CuentaBancaria::obtenerSaldo() const {
     return saldo;
 }
 
 std::string CuentaBancaria::obtenerNumeroCuenta() const {
     return numeroCuenta;
 }