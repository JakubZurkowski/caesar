#include <QString>
#include <QtTest>

#include "../Cezar.h"
#include <string>

class CezarTest : public QObject
{
    Q_OBJECT

public:
    CezarTest();

private Q_SLOTS:
    // metoda uruchamiana przed wszystkimi przypadkami testowymi
    void initTestCase();
    // metoda uruchamiana po wszystkich przypadkach testowych
    void cleanupTestCase();

    //weryfikacja dlugosci stringa
    void testCase();

    // serie danych do przypadku testowego
    void testSzyfruj_data();
    // przypadek testowy 1
    void testSzyfruj();

private:
    Cezar *cezar = nullptr;

};

// kod dostosowania std::string do potrzeb QtTest
Q_DECLARE_METATYPE(std::string);
namespace QTest {
    template<>
    char* toString(const std::string &str)
    {
        char *ch_arr = new char[str.length()+1];
        str.copy(ch_arr, str.length());
        return ch_arr;
    }
}

CezarTest::CezarTest()
{
}

void CezarTest::initTestCase()
{
    cezar = new Cezar();
}

void CezarTest::cleanupTestCase()
{
    delete cezar;
}

void CezarTest::testCase()
{
    std::string s;
    QCOMPARE(s.size(),4294967291ul);
}

void CezarTest::testSzyfruj_data()
{
    QTest::addColumn<std::string>("tekst_jawny");
    QTest::addColumn<std::string>("szyfrogram");

    // przypadek 1
    QTest::newRow("pusty_string")
            << std::string("")  // tekst_jawny
            << std::string(""); // szyfrogram

    // przypadek 2
    QTest::newRow("przyklad_z_wikipedii")
            << std::string("THE QUICK BROWN FOX JUMPS OVER THE LAZY DOG")  // tekst_jawny
            << std::string("QEB NRFZH YOLTK CLU GRJMP LSBO QEB IXWV ALD"); // szyfrogram
}


void CezarTest::testSzyfruj()
{
    QFETCH(std::string, tekst_jawny);
    QFETCH(std::string, szyfrogram);

    QCOMPARE(cezar->szyfruj(tekst_jawny), szyfrogram);
}

QTEST_APPLESS_MAIN(CezarTest)

#include "tst_cezar.moc"
