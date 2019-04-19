# -*- mode: python -*-

block_cipher = None


a = Analysis(['New.py'],
             pathex=['C:\\Users\\Youngkeyzou\\Desktop\\第2组\\期刊管理系统'],
             binaries=[],
             datas=[],
             hiddenimports=[],
             hookspath=[],
             runtime_hooks=[],
             excludes=[],
             win_no_prefer_redirects=False,
             win_private_assemblies=False,
             cipher=block_cipher)
pyz = PYZ(a.pure, a.zipped_data,
             cipher=block_cipher)
exe = EXE(pyz,
          a.scripts,
          a.binaries,
          a.zipfiles,
          a.datas,
          name='New',
          debug=False,
          strip=False,
          upx=True,
          runtime_tmpdir=None,
          console=True )
