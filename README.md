# BRAÇ ROBÒTIC PER AJUDAR PERSONES AMB DISCAPACITATS

Aquest repositori forma part del **Treball de Recerca** i conté el **codi en C++** i els **fitxers 3D** del projecte *Braç robòtic per ajudar persones amb discapacitats*.

---

## 👤 DADES DEL PROJECTE
- **Autor:** Miquel Monserrat Palau  
- **Curs:** 2 BATX - C
- **Institut:** Manuel de Cabanyes (Vilanova i la Geltrú)  
- **Projecte:** Braç robòtic per ajudar persones amb discapacitats

---

## 🎯 OBJECTIUS
- Dissenyar i fabricar un braç robòtic funcional i accessible.
- Programar el control amb servomotors i potenciòmetres.
- Documentar muntatge, connexions i ús.

---

## 🧩 ESTRUCTURA DEL REPOSITORI

| Carpeta | Descripció |
|---|---|
| `/codi` | Codi font en C++ (fitxers `.cpp` i `.h`) per al control del braç. |
| `/peces_3D` | Models 3D de les peces (formats recomanats: `.stl`, `.step`). |
| `/imatges` | Fotografies, renders o esquemes. |
| `/docs` | Documentació addicional (esquemes, memòries, instruccions). |

---

## ⚙️ REQUERIMENTS DE MAQUINARI
- **Placa Arduino UNO o similar**  
- **Servomotors**   
- **Potenciòmetres**
- **Font d'alimentació 5V estable** 
- **Cables i cargols**  


---

## 💻 COMPILACIÓ I CÀRREGA (C++)
1. Obre **Arduino IDE**.
2. Importa els fitxers del directori `/codi`.
3. Revisa i ajusta els **pins** dels servos i sensors a `control_servos.h`.
4. Connecta la placa via USB i prem **Upload**.


---

## 🖨️ PECES 3D I MUNTATGE
1. A `/peces_3D` trobaràs els fitxers per imprimir.
2. Muntatge recomanat:
   - Fixa la base al suport.
   - Col·loca els servos als allotjaments i centra’ls abans de fixar-los.
   - Uneix segments i pinça, verificant llibertats de moviment.
   - Alimenta i prova moviments suaus abans d’esforços.

---


## 📜 LLICÈNCIA
Aquest treball es publica sota **Llicència MIT** (vegeu `LICENSE`).

---

## ✉️ CONTACTE
Si tens dubtes o suggeriments, obre una **Issue** o un **Discussion** al repositori.
