#include <QCoreApplication>
#include <QtTest>

// add necessary includes here

class mainmenu2_test : public QObject
{
    Q_OBJECT

public:
    mainmenu2_test();
    ~mainmenu2_test();

private slots:
    void initTestCase();
    void cleanupTestCase();
    void test_case1();
};

mainmenu2_test::mainmenu2_test() {}

mainmenu2_test::~mainmenu2_test() {}

void mainmenu2_test::initTestCase() {}

void mainmenu2_test::cleanupTestCase() {}

void mainmenu2_test::test_case1() {}

QTEST_MAIN(mainmenu2_test)

#include "tst_mainmenu2_test.moc"
