# OpenEarth
La parte di codice e di documentazione di un modello tredimensionale della terra fai-da-te creato per un progetto di scuola da @Gigio09ski.
Il progetto si basa su Arduino Uno ed è completamente open-source
# Hardware
- Arduino Uno / Mini / Mega
- Stricia a argb (In questo caso io userò la `WS2812B`)
- Sensore IR (In questo caso io userò il `VS1838B` 3 pin)
- Un qualsiasi telecomando IR (Per esempio quello della tv o quello del condizionatore)
- Una batteria a 9v con adattatore per l'alimentazione (non è necessaria se si vuole fare cablata)
- 3 Cavi masciho-maschio e 3 cavi maschio-femmina
- Tanta Pazienza
# IR Dumping
l'Ir Dump ci occorre per sapere i nostri codici hex del telecomando necessari per i controlli della stricia

Collegare il sensore ir con 5V, GND e Dati (PWM6) con 3 cavetti maschio-femmina (la disposizione dei pin potrebbe variare da sensore a sensore, consiglio di fare delle ricerche sullo schema del sensore)

Occorrerà utilizzare lo script IR Dumper.ino assieme alla libreria `IRremote`. Dopo averlo caricato occorrerà aprire il monitor seriale di arduino, premere 4 pulsanti a vosta scelta, compariranno dei codici in hex (I Codici si trovano dopo `Raw-Data=`) per esempio i miei sono `0xEE11FB04` `0xED12FB04` `0xEC13FB04` `0xF708FB04`

Attenzione! Potrebbe capitare che arduino legga `0x0`, semplicemente è da ignorare
# Il Codice
