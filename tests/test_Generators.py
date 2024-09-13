"""
Copyright (c) 2023 Gouvernement du Québec
SPDX-License-Identifier: LiLiQ-R-1.1
License-Filename: LICENSES/EN/LiLiQ-R11unicode.txt
"""
# import pytest

"""
class TestItemBuilder(unittest.TestCase):
    def setUp(self) -> None:
        self.__NODEBUILDER = MoSiR.ItemBuilder("inputs/Node.json")
        self.__EDGEBUILDER= MoSiR.ItemBuilder("inputs/Edge.json")
    def test_GetValue(self) ->None:
        Testid = 0
        for DESCRIPTOR,NAME,VALUE in zip(["Half-life","Half-life","Half-life","Half-life"],
                                   ["Half-life[2]Others P&P, storage",
                                        "Half-life[565.78]Others P&P, storage",
                                        "Lucky[565.78]Others P&P, storage",
                                        "Others P&P, storageHalf-life[565.78]"],
                                        [2,565.78,1.0,565.78]):
            self.assertEqual(self.__NODEBUILDER._ItemBuilder__GetValue(NAME,DESCRIPTOR),VALUE,"Test id " + str(Testid))
            Testid+=1
    def test_GetName(self) ->None:
        Testid = 0
        for NAME,RETURNED in zip(["Half-life[565.78]Others P&P, storageTest2[45][56]",
                                  "Others P&P, storage",
                                  "Half-life[565.78]Others P&PTest3[45], storageTest2[45]"],
                                  ["Others P&P, storage[56]","Others P&P, storage","Others P&P, storage"]):
            self.assertEqual(self.__NODEBUILDER._ItemBuilder__GetName(NAME,["Half-life","Test2","Test3"]),RETURNED,"Test id " + str(Testid))
            Testid+=1

    class TestMiroGenerator(unittest.TestCase):
        def setUp(self) -> None:
            self.__GENERATOR = MoSiR.MiroGenerator("test",{},{})
        def test_GetEdgeConnectorValues(self)->None:
            Testid = 0
            for Item,Result in zip([{"data":{"content":"<p>45.67%</p>"}},{"data":{"content":"<p>30%</p>"}},
                                    {"data":{"content":"30%"}},{"data":{"content":"<p>30%,10%,45.56%</p>"}}],
                                   [[0.4567],[0.3],[0.3],[0.3,0.1,0.4556]]):
                self.assertEqual(self.__GENERATOR.__GetEdgeConnectorValues(Item),Result,"Test id " + str(Testid))
                Testid += 1
        def test_DocontainsValue(self)->None:
            Testid = 0
            for Item,contains,Result in zip([{"data":{"content":"<p>45.67%</p>"}},{"data":{"content":"<p>30%</p>"}}],
                                        ["%","test20"],
                                        [True,False]):
                self.assertEqual(self.__GENERATOR.__DoContainsValue(Item,contains),Result,"Test id " + str(Testid))
                Testid += 1
        def test_IsEdgeConnected(self)->None:
           self.assertEqual(self.__GENERATOR._MiroGenerator__IsEdgeConnected({"startItem":0,"endItem":1}),True)
           self.assertEqual(self.__GENERATOR._MiroGenerator__IsEdgeConnected({"startItem":0}),False)
           self.assertEqual(self.__GENERATOR._MiroGenerator__IsEdgeConnected({"endItem":0}),False)
"""