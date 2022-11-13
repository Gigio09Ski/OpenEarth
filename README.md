# OpenEarth
La parte di codice e di documentazione di un modello tredimensionale della terra fai-da-te creato per un modello di scuola da @Gigio09ski.
Il progetto si basa su Arduino Uno ed è completamente open-source
# Hardware
- Arduino Uno / Mini / Mega
- Stricia a argb (In questo caso io userò la WS2812B)
- Sensore IR (In questo caso io userò il VS1838B 3 pin)
- Un qualsiasi telecomando IR (Per esempio quello della tv o quello del condizionatore)
- Una batteria a 9v con adattatore per l'alimentazione (non è necessaria se si vuole fare cablata)
- 3 Cavi masciho-maschio e 3 cavi maschio-femmina
- Tanta Pazienza
# IR Dumping
l'Ir Dump ci occorre per sapere i nostri codici hex del telecomando necessari per i controlli della stricia

Collegare il sensore ir con 5V, GND e Dati (PWM11) con 3 cavetti maschio-femmina (la disposizione dei pin potrebbe variare da sensore a sensore, consiglio di fare delle ricerche sullo schema del sensore) Comunemente è Dati|5V|GND

Occorrerà utilizzare lo script IR Dumper.ino. Dopo averlo caricato occorrerà aprire il monitor seriale di arduino, premere 4 pulsanti a vosta scelta, compariranno dei codici in hex (alfanumerici) per esempio i miei sono `20DF8877`, `20DF48B7`, `20DFC837` e `20DF10EF`.

Attenzione! Potrebbe capitare che arduino legga `FFFFFFFF`, semplicemente è da ignorare
# Il Codice