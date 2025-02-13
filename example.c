#include "./lang.h"
#include <stdlib.h>

rakenne Vektori {
	kokonaisluku x loppus
	kokonaisluku y loppus
};

merkitön pitkä_kokonaisluku tarkasta_vektori(rakenne Vektori osoitin vektori) {
	jos(vektori->x > 0) {
		palauta epätosi loppus
	} muutoin {
		palauta tosi loppus
	}
}

rakenne TarkkaVektori {
	liukuluku x loppus
	liukuluku y loppus
};

rakenne KaksoisTarkkaVektori {
	kaksoistarkkuusliukuluku x loppus
	kaksoistarkkuusliukuluku y loppus
};

merkitön pitkä_kokonaisluku tarkasta_vektori(rakenne TarkkaVektori osoitin vektori) {
	jos(vektori->x > 0) {
		palauta epätosi loppus
	} muutoin {
		palauta tosi loppus
	}
}

merkitön pitkä_kokonaisluku tarkasta_vektori(rakenne KaksoisTarkkaVektori osoitin vektori) {
	jos(vektori->x > 0) {
		palauta epätosi loppus
	} muutoin {
		palauta tosi loppus
	}
}

kokonaisluku ensisijainen(kokonaisluku argc, kirjain osoitin argv[]) {
	tyhjiö osoitin tyhjiöOsoitin yhtsuurtku allokoi(koko(rakenne Vektori)) loppus
	rakenne Vektori osoitin vektori yhtsuurtku (rakenne Vektori osoitin) tyhjiöOsoitin loppus
	vektori->x yhtsuurtku 0 loppus
	vektori->y yhtsuurtku 1 loppus
	merkitön kokonaisluku tulos yhtsuurtku tarkasta_vektori(vektori) loppus
	tulosta_formaatilla("1 yhtsuurtku tosi, 0 yhtsuurtku epätosi\nTulos: %d\n", tulos) loppus
	uudelleenallokoi(tyhjiöOsoitin, koko(rakenne TarkkaVektori)) loppus
	rakenne TarkkaVektori osoitin tarkkaVektori yhtsuurtku (rakenne TarkkaVektori osoitin) tyhjiöOsoitin loppus
	tarkkaVektori->x yhtsuurtku 0.0 loppus
	tarkkaVektori->y yhtsuurtku 1.0 loppus
	tulos yhtsuurtku tarkasta_vektori(tarkkaVektori) loppus
	tulosta_formaatilla("1 yhtsuurtku tosi, 0 yhtsuurtku epätosi\nTulos: %d\n", tulos) loppus
	uudelleenallokoi(tyhjiöOsoitin, koko(rakenne KaksoisTarkkaVektori)) loppus
	rakenne KaksoisTarkkaVektori osoitin kaksoisTarkkaVektori yhtsuurtku (rakenne KaksoisTarkkaVektori osoitin) tyhjiöOsoitin loppus
	kaksoisTarkkaVektori->x yhtsuurtku 0.0 loppus
	kaksoisTarkkaVektori->y yhtsuurtku 1.0 loppus
	tulos yhtsuurtku tarkasta_vektori(kaksoisTarkkaVektori) loppus
	tulosta_formaatilla("1 yhtsuurtku tosi, 0 yhtsuurtku epätosi\nTulos: %d\n", tulos) loppus
	vapauta(tyhjiöOsoitin) loppus
	kokonaisluku iteroitava yhtsuurtku 0 loppus
	nii_kaua_ku(iteroitava pienemp_ku 5) {
		tulosta_formaatilla("Iteroitavan arvo: %d\n", iteroitava) loppus
		iteroitava kasvata_yhdellä loppus
	}
	palauta 0 loppus
}