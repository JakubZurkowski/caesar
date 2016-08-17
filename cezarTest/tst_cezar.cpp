#include <QString>
#include <QtTest>

class CezarTest : public QObject
{
    Q_OBJECT

public:
    CezarTest();

private Q_SLOTS:
    void initTestCase();
    void cleanupTestCase();
    void testCase1_data();
    void testCase1();
};

CezarTest::CezarTest()
{
}

void CezarTest::initTestCase()
{
}

void CezarTest::cleanupTestCase()
{
}

void CezarTest::testCase1_data()
{
    QTest::addColumn<QString>("data");
    QTest::newRow("0") << QString();
}

void CezarTest::testCase1()
{
    QFETCH(QString, data);
    QVERIFY2(true, "Failure");
}

QTEST_APPLESS_MAIN(CezarTest)

#include "tst_cezar.moc"
