#ifndef PLAYERPIC_H
#define PLAYERPIC_H
const int DogPip = 2;
const int DogHeight = 10;
const int DogWidth = 20;
static char Dog[DogPip][DogHeight][DogWidth+1] ={{
	"    a**********a    ",
	"   a************a   ",
	"  aa************aa  ",
	" aaa*aa******aa*aaa ",
	"aaa *aa******aa* aaa",
	" a ************** a ",
	"  *******aa*******  ",
	"  ****************  ",
	"   **************   ",
	"    ************    "
},{	
	"    a**********a    ",
	"   a************a   ",
	"  aa************aa  ",
	" aaa*x*x****x*x*aaa ",
	"aaa **x******x** aaa",
	" a **x*x****x*x** a ",
	"  *******aa*******  ",
	"  ****************  ",
	"   **************   ",
	"    ************    "

}};

const int CatPip = 2;
const int CatHeight = 10;
const int CatWidth = 20;
static char Cat[CatPip][CatHeight][CatWidth+1] ={{
        "    *           *   ",
        "   *a*         *a*  ",
        "  *aaa*********aaa* ",
        " ****************** ",
        " ***aa********aa*** ",
        " ***aa********aa*** ",
        " ****************** ",
        "  *******aa*******  ",
        "   **************   ",
        "      ********      "
},{
        "    *           *   ",
        "   *a*         *a*  ",
        "  *aaa*********aaa* ",
        " ****************** ",
        " ***x*x******x*x*** ",
        " ****x********x**** ",
        " ***x*x******x*x*** ",
        "  *******aa*******  ",
        "   **************   ",
        "      ********      "
}};


#endif //PLAYRERPIC_H
